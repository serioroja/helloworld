/******************************************************************************
 * earth - Display a message to the terminal.
 ******************************************************************************
 * Author  Adonis
 * Date:   03/15/2015
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NONE 0
void earth(void);

int main(void)
{
    int i;
    int number;

    printf("Hello planet Earth!\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > NONE)
    {
        for (i = 1; i <= number; i++)
        {
            earth();
	}
    }
    else
    {
        printf("no.\n");
    }

    printf("\nBye\n");

    return (EXIT_SUCCESS);
}

void earth(void)
{
    printf("     ________  \n");
    printf("    /        \\ \n");
    printf("   /          \\ \n");
    printf("  |            |\n");
    printf("  \\            /\n");
    printf("   \\          /\n");
    printf("    ---------\n");
}
