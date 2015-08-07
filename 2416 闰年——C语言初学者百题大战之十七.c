/*
Description
输入一个整数年份，要求判断是否是闰年

Input
输入一个整数年份

Output
如果是闰年输出Yes,否则输出No

Sample Input
2000

Sample Output
Yes

Source
yhr
*/
#include<stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	if((y%400==0) || (y%100!=0) && (y%4==0))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
