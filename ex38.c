#include <stdio.h>


int main()
{
    char arr[10];
    char array_start[] = "start_game";
    char array_leave[] = "leave_game";
    char array_option[] = "option";
    printf("Welcome to the thisrpg\n\n\n");
    printf("start_game\n");
    printf("option\n");
    printf("leave_game\n");
    scanf("%s", arr);
    int equalstart = 0;
    int i = 0;
    while(array_start[i] != '\0' && arr[i] != '\0')
    {
        if(arr[i] == array_start[i])
        {
            equalstart = 1;
        }   
        i++;
    }
    if(equalstart == 0)
    {
        printf("The game is started\n");
        char name[40];
        char class[40];
        printf("Now, you should create your character\n\n");
        printf("name\n");
        scanf("%s", name);
        printf("Your name is %s,\n\nclass:\n warroir,\n\n archer,\n mage,\n", name);
        scanf("%s", class);
        printf("your character's class is %s\n\n", class);
        printf("World creating.........\n");
    }
    else
    {
        printf("Bye bye");
    }
}