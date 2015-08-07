/*
Description
给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

Input
输入一个不多于5位的正整数

Output
输出分2行，第一行是一个整数，输出是几位数，第2行逆序输出

Sample Input
4578

Sample Output
4
8754

Source
yhr
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,n,m;
	scanf("%d",&a);
	b=a;
	i=0;
	m=0;
	while(b!=0)
	{
		i++;
		b=b/10;
	}
	printf("%d\n",i);
	while(a!=0)
	{
		n=a%10;
		printf("%d",n);
		a=a/10;
	}
	printf("\n");
	return 0;
}
