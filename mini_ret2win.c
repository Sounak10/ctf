
#include <stdio.h>

void vuln()
{
    char buffer[40];

    puts("Can you control the flow of the program?");
    gets(buffer);
}

void main()
{
    vuln();
}

void flag()
{
    puts("GLUG{y0u_4r3_4_r34l_h4ck3r}");
}
