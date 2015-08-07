/*
Description
输入某年某月某日，判断这一天是这一年的第几天？

Input
输入为一行输入格式为YYYY-MM-DD

Output
输出这天是这一年的第几天

Sample Input
2007-01-01

Sample Output
1

Source
yhr
*/
#include<stdio.h>
int main()
{
	int y,m,d,n;
	scanf("%d-%d-%d",&y,&m,&d);
	switch(m)
	{
		case 1:n=d;break;
		case 2:n=31+d;break;
		case 3:n=59+d;break;
		case 4:n=90+d;break;
		case 5:n=120+d;break;
		case 6:n=151+d;break;
		case 7:n=181+d;break;
		case 8:n=212+d;break;
		case 9:n=243+d;break;
		case 10:n=273+d;break;
		case 11:n=304+d;break;
		case 12:n=334+d;break;
	}
	if(y%400==0||y%4==0&&y%100!=0)
	{
		if(m>=3)
		{
			n=n+1;
			printf("%d\n",n);
		}
		else
		{
			printf("%d\n",n);
		}
	}
	else
	{
		printf("%d\n",n);
	}
	return 0;
}
