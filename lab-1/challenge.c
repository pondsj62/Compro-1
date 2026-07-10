#include <stdio.h>
int main()
{
    printf("+------------------+----------+----------+");
    printf("\n| %-16s | %8s | %8s |", "Name", "Score1", "Score2");
    printf("\n+------------------+----------+----------+");
    printf("\n| %-16s | %8d | %8d |", "Alice", 85, 90);
    printf("\n| %-16s | %8d | %8d |", "Bob", 78, 82);
    printf("\n| %-16s | %8d | %8d |", "Charlie", 92, 88);
    printf("\n+------------------+----------+----------+\n");

    return 0;
}