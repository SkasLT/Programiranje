#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char choice, valueChoice, continueChoice;
    float percentage, value, min, max;

    do
    {
        do
        {
            printf("Press \"P\" for percentage calc or \"V\" for value calc: ");
            scanf(" %c", &choice);
            getchar();

            choice = toupper(choice);

            if ((choice != 'P') && (choice != 'V'))
                printf("Wrong input, try again!\n");

        } while ((choice != 'P') && (choice != 'V'));

        switch (choice)
        {
        case 'P':
            printf("\nMin value: ");
            scanf("%f", &min);

            printf("Max value: ");
            scanf("%f", &max);

            printf("Value: ");
            scanf("%f", &value);

            printf("\n---------Result---------\n");
            printf("Input min: %.2f\n", min);
            printf("Input max: %.2f\n", max);
            printf("Input value: %.2f\n\n", value);
            printf("Calculated percentage: %.2f%%\n", ((value - min) * 100) / (max - min));
            printf("-------------------------\n\n");
            break;

        case 'V':
            do
            {
                printf("\nPress \"S\" for single value calc or \"M\" for multiple value calc: ");
                scanf(" %c", &valueChoice);
                getchar();

                valueChoice = toupper(valueChoice);

                if ((valueChoice != 'S') && (valueChoice != 'M'))
                    printf("Wrong input, try again!\n");

            } while ((valueChoice != 'S') && (valueChoice != 'M'));

            if (valueChoice == 'S')
            {
                printf("\nMin value: ");
                scanf("%f", &min);

                printf("Max value: ");
                scanf("%f", &max);

                printf("Percentage: ");
                scanf("%f", &percentage);

                printf("\n---------Result---------\n");
                printf("Input min: %.2f\n", min);
                printf("Input max: %.2f\n", max);
                printf("Input percentage: %.2f%%\n\n", percentage);
                printf("Calculated value: %.2f\n", (percentage * (max - min) / 100) + min);
                printf("-------------------------\n\n");
            }

            else
            {
                printf("\nMin value: ");
                scanf("%f", &min);

                printf("Max value: ");
                scanf("%f", &max);

                printf("\n---------Calculated values---------\n");
                printf("Input min: %.2f\n", min);
                printf("Input max: %.2f\n\n", max);

                for (int i = 0; i <= 100; i += 10)
                    printf("Value at %d%%: %.2f\n", i, (i * (max - min) / 100) + min);

                printf("-----------------------------------\n\n");
            }

            break;
        }

        do
        {
            printf("Do you wish to calculate again? (Y/N): ");
            scanf(" %c", &continueChoice);
            getchar();

            continueChoice = toupper(continueChoice);

            if ((continueChoice != 'Y') && (continueChoice != 'N'))
                printf("Wrong input, try again!\n");
            else if (continueChoice == 'Y')
                printf("\n-----New calculation-----\n");

        } while ((continueChoice != 'Y') && (continueChoice != 'N'));

    } while (continueChoice == 'Y');

    system("pause");

    return 0;
}