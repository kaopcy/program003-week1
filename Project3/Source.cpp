#include <stdio.h>
int main()
{
    int i=0,o=0,sum = 0,x;
    printf("insert number of row and colum : ");
    scanf_s("%d",& x);
    for (int i = 0; i <= x; i++)
    {
        for (int o = 0; o < i; o++)
        {
            printf("* ");
        }
        sum += i;
        printf("\n");
    }
    printf("\nSum of all * is %d", sum);
}
