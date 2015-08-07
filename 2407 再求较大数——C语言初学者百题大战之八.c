/*
Description
上题是否很easy?
那么给你增加点难度，现在要求三个数中的较大数。

Input
输入三个数，用空格隔开

Output
输出三个数中最大数

Sample Input
1 2 3

Sample Output
3

Hint
怎么样，三个数难吗？如果还不够难，想想如果叫你求1000个数中的最大值，你有办法吗？留个你自学去，以后我们再出这样的题。

Source
yhr
*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		d=a;
	}
	else
	{
		d=b;
	}
	if(d>c)
	{
		d=d;
	}
	else
	{
		d=c;
	}
	printf("%d\n",d);
	return 0;
}
