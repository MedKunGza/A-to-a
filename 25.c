#include <stdio.h>

int main()
{
    char x;
    printf("Input Alphabet = ");
	  scanf("%c",&x);
    if(x<91 & x>64)
    {
      printf("%c",x+32);
    }
    else if(x<122 & x>96)
    {
      printf("%c",x-32);
    }
    else 
    {
      printf("No more");
    }
    return 0;
}