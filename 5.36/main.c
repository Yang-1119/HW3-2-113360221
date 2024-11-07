#include <stdio.h>
#include <math.h>

int main() {
    double x;
    x = pow(2,64)-1;
    printf("The number of moves required for 64 disks is: %.0lf\n",x);
    return 0;
}
