/******************************************************************************
 * earth - Display a message to the terminal.
 ******************************************************************************
 * Author  Adonis
 * Date:   03/15/2015
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void earth(void);

int main(void)
{
    printf("Hello planet Earth!\n");

    earth();

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
