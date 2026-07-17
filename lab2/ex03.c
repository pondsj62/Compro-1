#include<stdio.h>
int main()
{   

    int age,weight;
    float height;
    char gender;
    char name[20];
    char edu[20];

    printf("Enter you Name :");
    scanf("%[^\n]",name);
    printf("Enter your Age :");
    scanf("%d",&age);
    printf("Enter your height :");
    scanf("%f",&height);
    printf("Enter your weight :");
    scanf("%d",&weight);
    printf("Enter your gender :");
    scanf(" %c",&gender);
    printf("Enter your Education Qualification :");
    scanf(" %[^\n]",edu);

    printf("\nName : %s\nAge : %d\nGender :  %c\nHeight : %.1f\nWeight : %d\nEducation : %s\n",name,age,gender,height,weight,edu);

    return 0;
}
