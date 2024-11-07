#include <stdio.h>
#include <stdlib.h>


unsigned int x(unsigned int n)
{
    unsigned int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    if(n==1)
    {
      fib[0]=0;
    }
    else if(n==2)
    {
      fib[1]=1;
    }
    else
    {
        for(unsigned int i=2;i<=n;i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
        }
    }


    return fib[n-1];
}

int main() {
    unsigned int n;

    printf("Please enter the Nth of Fibonacci number:");
    scanf("%u", &n);

    printf("The %uth Fibonacci number is %u\n",n,x(n));

    return 0;
}
