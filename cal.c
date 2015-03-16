/******************************************************************************
 * cal - A simple calculator on the terminal.
 ******************************************************************************
 * Author Adonis
 * Date   03/15/2015
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ADDITION 1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define DIVISION 4

void welcomeMessage(void);
void calculatorOptions(void);

int main(void)
{
    float first_term;
    float second_term;
    float output;
    int option;

    welcomeMessage();  

    printf("Enter the first term: ");
    scanf("%f", &first_term);
    printf("Enter the second term: ");
    scanf("%f", &second_term);

    calculatorOptions();
    printf("Enter your option: ");
    scanf("%d", &option);

    if (option == ADDITION)
    {
        output = first_term + second_term;
    }
    else if (option == SUBTRACTION)
    {
        output = first_term - second_term;
    }
    else if (option == MULTIPLICATION)
    {
        output = first_term * second_term;
    }
    else if (option == DIVISION)
    {
        output = first_term / second_term;
    }
    else
        printf("error\n");

    printf("Output: %.2f\n", output);

    return (EXIT_SUCCESS);
}

void welcomeMessage(void)
{
    printf("*************************************************\n");
    printf("*                                               *\n");
    printf("*    Welcome to the program                     *\n");
    printf("*         calculator                            *\n");
    printf("*                                               *\n");
    printf("*************************************************\n");
}
void calculatorOptions(void)
{
    printf("*************************************************\n");
    printf("* 1) Addition                                   *\n");
    printf("* 2) Subtraction                                *\n");
    printf("* 3) Multiplication                             *\n");
    printf("* 4) Division                                   *\n");
    printf("*************************************************\n");
}
