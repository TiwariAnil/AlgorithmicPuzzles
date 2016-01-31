#include <stdlib.h>
#include <stdio.h>
int main()
{
    unsigned int a, b, c;
    a = rand();
    b = rand();
    
    c = a + b;
    printf("a=%d; b=%d; c=%d; ", a, b, c);
	if( c < a || c < b)
    {
        printf("correct");
    }
     else
    {
        printf("error");
    }
}
