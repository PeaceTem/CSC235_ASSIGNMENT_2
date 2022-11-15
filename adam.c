#include <stdio.h>
#include <string.h>
#include "stdlib.h"
char adam_steps[100];
int number_of_steps;
FILE *ptr;


void acceptInput();
void checkInput();
void numberOfStep(const char *steps);

int main(int argc, char *argv[])
{
    
    char filename[] = "adam.in";
    ptr = fopen(filename, "r");

    if(ptr == NULL){
        printf("Can't open file!");
        return 0;
    }
    acceptInput();

    fclose(ptr);
    return 0;
}



void acceptInput()
{
    if(fscanf(ptr, "%s", adam_steps))
    {
        number_of_steps = atoi(adam_steps);
    }

    checkInput();
}



void checkInput()
{
            

    while((fscanf(ptr, "%s", adam_steps) == 1) && number_of_steps > 0)
    {

        int steps_length = strlen(adam_steps);

        int counter = 0;
        for(int i=0; i<steps_length; i++)
        {
            if(!((adam_steps[i] == 'U') || (adam_steps[i] == 'D')))
            {
                printf("%c cannot be accepted.\nInput U and D only. Thanks! \n", adam_steps[i]);
                continue;
            }
        }
        numberOfStep(adam_steps);
        number_of_steps -= 1;
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
        } else if(steps[i] == 'D'){
            break;
        }
    }
    printf("%d\n", counter);

}
