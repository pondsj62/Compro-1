#include<stdio.h>
int main ()
{
    int num;
    float value;
    char a[1];
    printf("Please enter an integer value : ");
    scanf("%d",&num);
    printf("You entered %d\n",num);
    printf("Please enter a float value:");
    scanf("%f",&value);
    printf("You entered %.1f\n",value);
    printf("Please enter a character:");
    scanf(" %c",a);
    printf("You entered %s\n",a);
    

    return 0; 
}