#include <stdio.h>
int main()
{
    int a = 10,b = 5;
    float f = 5.4556;
    char grade = 'A';
    char subject[12] = "Programming";

    printf("int = %d, %d\n",a,b);
    printf("float = %.2f\n",f);
    printf("char = %c\n",grade);
    printf("string = %s\n",subject);


    printf("%c\n",subject[8]);

    printf("ASCII %c\n",126);
    
    return 0;
}