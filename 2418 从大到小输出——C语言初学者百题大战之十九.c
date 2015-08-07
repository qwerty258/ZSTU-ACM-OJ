/*
Description
输入三个整数x,y,z，请把这三个数由大到小输出

Input
输入三个整数

Output
从大到小输出这三个整数，中间用一个空格隔开

Sample Input
1 5 4

Sample Output
5 4 1

Source
yhr
*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		d=a;
	}
	else
	{
		d=a;
		a=b;
		b=d;
	}
	if(c>a)
	{
		printf("%d %d %d\n",c,a,b);
	}
	else
	{
		if(b>c)
		{
			printf("%d %d %d\n",a,b,c);
		}
		else
		{
			printf("%d %d %d\n",a,c,b);
		}
	}
	return 0;
}
