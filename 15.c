#include <stdio.h>

int main()
{
    char Upper, Lower;
    printf("Input Upper = ");
	scanf("%c",&Upper);
    Lower = Upper+32;
    printf("Lower is %c",Lower);
    return 0;
}