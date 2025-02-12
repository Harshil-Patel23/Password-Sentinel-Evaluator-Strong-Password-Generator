#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MIN_LENGTH 8
#define MAX_LENGTH 20
int main()
{
    char password[100];
    int strengthPercentage;
    int validPassword = 0;
    int choice, res;
label:
    printf("\nEnter password(or enter 'exit' to quit): ");
    scanf("%99s", password);
    if (strcmp(password, "exit") == 0)
    {
        printf("\n\nExiting.......");
        return 0;
    }
    else
    {
        strengthPercentage = calculateStrengthPercentage(password);
        if (strengthPercentage == -1)
        {
            printf("Password length must be between %d and %d characters. Please try again.\n", MIN_LENGTH, MAX_LENGTH);
        }
        else
        {
            if (strengthPercentage >= 75)
            {
                printf("\nPassword is strong");
                do
                {
                label1:
                    displaymenu();
                    scanf("%d", &choice);
                    switch (choice)
                    {
                    case 1:
                        displayPasswordStatistics(password);
                        break;
                    case 2:
                        generateStrongPasswordSuggestion(strlen(password));
                        break;
                    case 3:
                        printf("Exiting...\n");
                        return 0;
                    default:
                        printf("Invalid choice. Please enter a number between 1 and 3.\n");
                        break;
                    }
                } while (choice != 3);
            }
            else
            {
                printf("\nPassword is weak.\n");
                res = provideWeakPasswordSuggestions(password);
                if (res == -1)
                {
                    printf("\nInsufficient space for adding new charcters");
                }
                if (res == 0)
                    goto label;
                if (res == 1)
                    goto label1;
            }
        }
    }
    return 0;
}