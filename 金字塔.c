#include <stdio.h>
int main(void)
{
    int i, j, k, n;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1;i <= n;i++)
        {
            for (j = 1;j <= n - i;j++)
            {
                printf(" ");
            }
            for (k = 1;k <= i*2 - 1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}