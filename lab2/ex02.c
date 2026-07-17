#include<stdio.h>
int main ()
{
    int time;
    int hour;
    int minutes;
    printf("Enter total minutes :");
    scanf("%d",&time);
    hour = time / 60;
    minutes = time % 60;
    printf("%d minutes is %d hour (s) and %d minute (s)\n",time,hour,minutes);

    return 0;



}