/*
Description
告诉你n,你能笔算计算出下面的值吗？ 
1+1/(1+2)+1/(1+2+3)+1/(1+2+3+4)+……+1/(1+2+3+4+……+n) 
想一想，笔算如何快速算出来。 
当然这里我们用计算机来实现，你可以不用那种办法拉。

Input
多组测试数据，每组输入一个非负整数N

Output
对于每组数据在一行输出1+1/(1+2)+1/(1+2+3)+1/(1+2+3+4)+……+1/(1+2+3+4+……+n)的值，保留4位小数 

Sample Input
2

Sample Output
1.3333

Source
yhr
*/
#include<stdio.h>
int main()
{
	int n,i;
	float x,k;
	while(scanf("%d",&n)!=EOF)
	{
		x=0.0;
		i=1;
		k=0.0;
		while(i<=n)
		{
			x=x+i;
			k=k+1/x;
			i++;
		}
		printf("%.4f\n",k);
	}
	return 0;
}
