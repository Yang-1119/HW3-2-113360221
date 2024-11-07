#include <stdio.h>
#include <stdlib.h>

int power(int base,int exponent)
{
    if(exponent == 1)
    {
        return base;
    }

    else
    {
        return base*power(base,exponent-1);
    }
}

int main()
{
    int base,exponent;

    printf("Plesase enter the base:");
    scanf("%d",&base);
    printf("Please enter the exponent:");
    scanf("%d",&exponent);

    int result = power(base,exponent);

    printf("%d^%d=%d\n",base,exponent,result);

    return 0;
}
