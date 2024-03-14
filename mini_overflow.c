#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



int main()
{
    setbuf(stdout, 0);
	setbuf(stdin, 0);
	setbuf(stderr, 0);
    int a=51;
    printf("Can you get the flag?\n");
    char buffer1[40];
    fgets(buffer1,100,stdin);
    if(a!=51)
    system("cat flag.txt");
    else
    printf("You ain't getting the flag\n");
}   
