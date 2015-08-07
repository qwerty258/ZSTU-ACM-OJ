/*
Description
大家知道判断一个数能被另一个数整除如何判断吗？很easy吧？ 
那么现在让你来判一下吧

Input
输入三个整数，分别为a,b,c（其中b,c均不为0）

Output
如果a既是b的整数倍又是c的整数倍，则输出Yes,否则输出No

Sample Input
35 5 7

Sample Output
Yes

Source
yhr
*/
#include<stdio.h>
int main()
{
	int a,b,c,m,n;
	scanf("%d %d %d",&a,&b,&c);
	m=a%b;
	n=a%c;
	if(m==0)
	{
		if(n==0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
