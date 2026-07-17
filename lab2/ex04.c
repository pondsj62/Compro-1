#include<stdio.h>
int main()
{
    int ID,Pro_score;
    float physic,cal,gpa;
    char name[10];

    printf("Enter you Name :");
    scanf("%[^\n]",name);
    printf("Enter your student ID :");
    scanf("%d",&ID);
    printf("Enter your Programming score :");
    scanf("%d",&Pro_score);
    printf("Enter your Physics score :");
    scanf("%f",&physic);
    printf("Enter your Calculas score :");
    scanf(" %f",&cal);
    gpa = 9.5 / 3;
    printf("Hi %s( %d ) ! Your GPA is %.2f \n",name,ID,gpa);
    
    return 0;

}