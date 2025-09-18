// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int roll[100], class[100], marks[100];
//     char naam[100][20];
//     int user_choice, count = 0, sum = 0, avg = 0;
//     char more[4];

//     printf("Welcome to Student Details Program\n");

//     do
//     {
//         printf("\nChoose an option:\n");
//         printf("1. Enter Student Data\n");
//         printf("2. Display Student Data\n");
//         printf("3. Average & Total Marks\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &user_choice);

//         switch (user_choice)
//         {
//         case 1:
//             printf("Do you want to enter student details? (yes/no): ");
//             scanf(" %s", more);

//             while (strcmp(more, "yes") == 0)
//             {
//                 printf("\nStudent no.%d:\n", count + 1);

//                 printf("Name: ");
//                 scanf(" %s", naam[count]);

//                 printf("Roll No.: ");
//                 scanf("%d", &roll[count]);

//                 printf("Class: ");
//                 scanf("%d", &class[count]);

//                 printf("Marks: ");
//                 scanf("%d", &marks[count]);

//                 count++;

//                 printf("Do you want to enter another student? (yes/no): ");
//                 scanf(" %s", more);
//             }
//             break;

//         case 2:
//             if (count == 0)
//             {
//                 printf("\nNo student data entered yet.\n");
//             }
//             else
//             {
//                 printf("\nDisplaying Student Data:\n");
//                 for (int i = 0; i < count; i++)
//                 {
//                     printf("\nStudent no.%d Details:\n", i + 1);
//                     printf("Name     : %s\n", naam[i]);
//                     printf("Roll No. : %d\n", roll[i]);
//                     printf("Class    : %d\n", class[i]);
//                     printf("Marks    : %d\n", marks[i]);
//                     printf("-----------------------------\n");
//                 }
//             }
//             break;

//         case 3:
//             if (count == 0)
//             {
//                 printf("\nNo marks available to calculate.\n");
//             }
//             else
//             {
//                 sum = 0;
//                 for (int i = 0; i < count; i++)
//                 {
//                     sum += marks[i];
//                 }
//                 avg = sum / count;
//                 printf("\nAverage Marks: %d\n", avg);
//                 printf("Total Marks  : %d\n", sum);
//             }
//             break;

//         case 4:
//             printf("\nExiting the program...\n");
//             break;

//         default:
//             printf("\nInvalid Input! Please try again.\n");
//         }

//     } while (user_choice != 4);

//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int roll[100], class[100], marks[100];
    char naam[100][20];
    int user_choice, count = 0, sum = 0, avg = 0;
    bool continue_entry;

    printf("Welcome to Student Details Program\n");

    do
    {
        printf("\nChoose an option:\n");
        printf("1. Enter Student Data\n");
        printf("2. Display Student Data\n");
        printf("3. Average & Total Marks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &user_choice);

        switch (user_choice)
        {
        case 1:
            continue_entry = true;

            while (continue_entry)
            {
                printf("\nStudent no.%d:\n", count + 1);

                printf("Name: ");
                scanf(" %s", naam[count]);

                printf("Roll No.: ");
                scanf("%d", &roll[count]);

                printf("Class: ");
                scanf("%d", &class[count]);

                printf("Marks: ");
                scanf("%d", &marks[count]);

                count++;

                printf("Do you want to enter another student? (1 for Yes / 0 for No): ");
                scanf("%d", &continue_entry);
            }
            break;

        case 2:
            if (count == 0)
            {
                printf("\nNo student data entered yet.\n");
            }
            else
            {
                printf("\nDisplaying Student Data:\n");
                for (int i = 0; i < count; i++)
                {
                    printf("\nStudent no.%d Details:\n", i + 1);
                    printf("Name     : %s\n", naam[i]);
                    printf("Roll No. : %d\n", roll[i]);
                    printf("Class    : %d\n", class[i]);
                    printf("Marks    : %d\n", marks[i]);
                    printf("-----------------------------\n");
                }
            }
            break;

        case 3:
            if (count == 0)
            {
                printf("\nNo marks available to calculate.\n");
            }
            else
            {
                sum = 0;
                for (int i = 0; i < count; i++)
                {
                    sum += marks[i];
                }
                avg = sum / count;
                printf("\nAverage Marks: %d\n", avg);
                printf("Total Marks  : %d\n", sum);
            }
            break;

        case 4:
            printf("\nExiting the program...\n");
            break;

        default:
            printf("\nInvalid Input! Please try again.\n");
        }

    } while (user_choice != 4);

    return 0;
}
