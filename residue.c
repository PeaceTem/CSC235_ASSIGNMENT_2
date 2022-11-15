#include <stdio.h>
#include <string.h>
char adam_steps[100];


void acceptInput();
void checkInput();
int numberOfStep(char *steps);

int main(int argc, char *argv[])
{
    acceptInput();

    numberOfStep(adam_steps);
    return 0;
}



void acceptInput()
{
    printf("Enter the symbols for Adam's steps: \n");
    scanf("%s", &adam_steps);
    checkInput();
}



void checkInput()
{
    int steps_length = strlen(adam_steps);
    int counter;
    for(int i=0; i<steps_length; i++)
    {
        if(!((adam_steps[i] == 'U') || (adam_steps[i] == 'D')))
        {
            printf("%c cannot be accepted.\nInput U and D only. Thanks! \n", adam_steps[i]);
            acceptInput();
        }
    }
}


int numberOfStep(char *steps)
{
    int steps_length = strlen(steps);
    int counter = 0;
    for(int i=0; i<steps_length; i++)
    {
        if(steps[i] == 'U')
        {
            counter++;
            printf("%c\n", steps[i]);
            printf("%d\n", counter);
        } else if(steps[i] == 'D'){
            break;
        }
    }
    printf("%d\n", counter);

    return 1;
}
