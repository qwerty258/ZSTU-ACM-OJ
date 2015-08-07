#include <stdio.h>
#include <string.h>
int main(void)
{
    int i,x;
    char n,a[101];
    while(gets(a)!=NULL)
    {
        x=strlen(a);
        scanf("%c",&n);
        for(i=0;i<x;i++)
        {
            if(a[i]==n)
            {
                continue;
            }
            else
            {
                printf("%c",a[i]);
            }
        }
        printf("\n");
        getchar();
    }
    return 0;
}
