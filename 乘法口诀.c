#include <stdio.h>
int main(void)
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d*%d=%d ",j,i,i*j);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
