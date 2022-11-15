#include <stdio.h>
#include <string.h>
#include "stdlib.h"
char adam_steps[100];
FILE *ptr;


// void acceptInput();
void checkInput();
void numberOfStep(const char *steps);

int main(int argc, char *argv[])
{
    
    char filename[] = "file.pdf";
    ptr = fopen(filename, "r");

    if(ptr == NULL){
        printf("Can't open file!");
        return 0;
    }
    // acceptInput();
    checkInput();

    // numberOfStep(adam_steps);
    fclose(ptr);
    return 0;
}



void acceptInput()
{
    checkInput();
}



void checkInput()
{
            
    int number_of_steps = atoi(adam_steps);
    
    if(number_of_steps > 0)           
    {
        printf("%d\n", number_of_steps);
    }

    while(fscanf(ptr, "%s", adam_steps) == 1)
    {
        // printf("%s\n", adam_steps);

        int steps_length = strlen(adam_steps);
        // printf("%d\n", steps_length);

        int counter = 0;
        for(int i=0; i<steps_length; i++)
        {
            if(!((adam_steps[i] == 'U') || (adam_steps[i] == 'D')))
            {
                printf("%c cannot be accepted.\nInput U and D only. Thanks! \n", adam_steps[i]);
                continue;
                // acceptInput();
            }
        }
        numberOfStep(adam_steps);
    }

}


void numberOfStep(const char *steps)
{
    int steps_length = strlen(steps);
    int counter = 0;
    for(int i=0; i<steps_length; i++)
    {
        if(steps[i] == 'U')
        {
            counter++;
            // printf("%c\n", steps[i]);
            // printf("%d\n", counter);
        } else if(steps[i] == 'D'){
            break;
        }
    }
    printf("%d\n", counter);

}
