//Print initials of a name with the surname displayed in full.

#include <stdio.h>
int main()
{
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("The initials with surname in full are: ");

    
    if (name[0] != ' ' && name[0] != '\n')
    {
        printf("%c. ", name[0]);
    }

    
    while (name[i] != '\0')
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0')
        {
            if (name[i + 2] != ' ' && name[i + 2] != '\n' && name[i + 2] != '\0')
            {
                printf("%c. ", name[i + 1]);
            }
            else
            {
                printf("%s", &name[i + 1]);
                break; 
            }
        }
        i++;
    }

    printf("\n");

    return 0;
}