#include <stdio.h>
int main()
{
    float a, b, d;
    int c;
    a = 23.44;
    b = 3.4;
    c = 2;
    d = a+b+c;
    printf("%.2f + %.1f + %d = %.2f \n",a,b,c,d);
    return 0;
}