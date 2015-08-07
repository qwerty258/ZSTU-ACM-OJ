/*
Description
一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

Input
输入一个5位整数

Output
如果是回文数，则输出Yes,否则输出No

Sample Input
12321

Sample Output
Yes

Source
yhr
*/
#include<stdio.h>
int main()
{
    int a,m,n;
    scanf("%d",&a);
    m=a%100;
    n=a/1000;
    n=n/10+(n%10)*10;
    if(m==n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
