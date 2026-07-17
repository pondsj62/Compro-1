#include<stdio.h>
int main()
{
    int numa,numb,numc,min,max,sum;
    float avg;

    printf("Enter integer :");
    scanf("%d",&numa);
    printf("Enter integer :");
    scanf("%d",&numb);
    printf("Enter integer :");
    scanf("%d",&numc);

    min = numa;
    if (numb < min) min = numb;
    if (numc < min) min = numc;

    max = numa;
    if (numb > max) max = numb;
    if (numc > max) max = numc;

    sum = numa + numb + numc;

    avg = (float)sum / 3;

    printf("\n Results:\n Minimum: %d\n Maximum: %d\n Sum: %d\n Average: %.2f\n",min,max,sum,avg);
}