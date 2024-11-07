#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x;
    printf("Please enter two integers:");
    scanf("%d %d",&a,&b);
    for(x=1;;x++)
    {
        if((x%a)==0 && (x%b)==0)
        {
            printf("The least common multiple is %d\n",x);
            break;
        }
    }
    return 0;
}
