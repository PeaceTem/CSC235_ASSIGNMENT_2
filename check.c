#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    FILE *ptr;
    ptr = fopen("file.pdf", "r");
    char adam[100];

    if(ptr == NULL){
        printf("Can't open file!");
    }

    fgets(adam, 100, ptr);
    printf("%s", adam);

    fgets(adam, 100, ptr);

    printf("%s", adam);
    fgets(adam, 100, ptr);

    printf("%s", adam);
    fclose(ptr);
    return 0;
}