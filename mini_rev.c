#include <stdio.h>
#include <string.h>

int main()
{
    char input[32];
    while (1)
    {
        printf("Enter the flag: ");
        scanf("%s", input);
        if (strcmp(input, "GLUG{70U_4R3_G00D_4T_R3V3RS1NG}") == 0)
        {
            printf("You are quite good at reversing!\n");
            break;
        }
        else
        {
            printf("Incorrect! Try again\n");
        }
    }
    return 0;
}