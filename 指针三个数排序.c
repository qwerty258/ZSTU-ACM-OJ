#include <stdio.h>
int main(void)
{
    void swap(int *pp1,int *pp2);
    int a,b,c;
    int *p1,*p2,*p3;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        p1=&a;
        p2=&b;
        p3=&c;
        if(a<b)
        {
            swap(p1,p2);
        }
        if(b<c)
        {
            swap(p2,p3);
        }
        if(a<b)
        {
            swap(p1,p2);
        }
        printf("%d %d %d\n",*p1,*p2,*p3);
    }
    return 0;
}
void swap(int *pp1,int*pp2)
{
    int temp;
    temp=*pp1;
    *pp1=*pp2;
    *pp2=temp;
}
