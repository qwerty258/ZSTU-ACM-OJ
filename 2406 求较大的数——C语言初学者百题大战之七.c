/*
Description
哈哈，被上题的英文题搞蒙了吗？以后我们还会适当的出一些英文题的。要想成为一名ACMer,要努力学习英文哦。
好，这题不出英文的了。

Input
输入2个整数a和b,用一个或几个空格隔开

Output
输出其中较大的数，并换行

Sample Input
4 5

Sample Output
5

Hint
需要用if选择结构了，不清楚的同学赶快自学哦。
对了，输入的时候2整数用1个或几个空格隔开，可以采用下面的形式处理:
scanf("%d%d",&a,&b);
格式控制符之间不要加任何空格就可以，这样除了可以是多个空格，整数之间如果用换行或Tab隔开都可以读出来

Source
yhr
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	printf("%d\n",c);
	return 0;
}
