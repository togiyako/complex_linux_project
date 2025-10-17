#include <stdio.h>
#include "lib/convert.h"
#include <stdlib.h>


void menu()
{   
    printf("\n-- Converter --\n");
    printf("Upper text - 1\n");
    printf("Lower text - 2\n");
    printf("Exit       - 0\n");
    printf("Enter your choice: ");
}


int main()
{   
    char text[BUFFER_SIZE];
    int choice = -1;

    while (1)
    {
       menu();
       if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input, please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }

        while (getchar() != '\n');

        switch (choice)
        {
        case 1:
            printf("Enter text:");
            if(fgets(text, sizeof(text), stdin))
            {
                upper(text);
                printf("Result: %s", text);
            }
            break;
        
        case 2:
            printf("Enter text:");
            if(fgets(text, sizeof(text), stdin))
            {
                lower(text);
                printf("Result: %s", text);
            }
            break;
        
        case 0:
            return 0;
        
        default:
            printf("Invalid choice,try again!\n");
            break;
        } 

    }
}
