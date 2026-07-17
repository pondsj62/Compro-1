#include<stdio.h>
int main()
{

    int age;
    float height;
    char name[20],lastname[20];
    char uni[20];

    printf("Enter your full name :");
    scanf("%s %s",name,lastname);
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your height :");
    scanf("%f",&height);
    printf("Enter your Univercity name :");
    scanf(" %[^\n]",uni);

    printf ("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.\n",lastname[0],name,uni,age,height);
}