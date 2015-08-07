/*
Description
素数是除了 1 和它本身之外没有其它因子的自然数。素数是数论中最纯粹、最令人着迷的概念。除了 2 之外，所有素数都是奇数 (因为否则的话除了 1 和它本身之外还有一个因子 2，从而不满足素数的定义)，因此很明显大于 2 的两个相邻素数之间的最小可能间隔是 2。所谓孪生素数指的就是这种间隔为 2 的相邻素数，它们之间的距离已经近得不能再近了，就象孪生兄弟一样。最小的孪生素数是 (3, 5)，在 100 以内的孪生素数还有 (5, 7), (11, 13), (17, 19), (29, 31), (41, 43), (59, 61) 和 (71, 73)，总计有 8 组。但是随着数字的增大，孪生素数的分布变得越来越稀疏，寻找孪生素数也变得越来越困难。 
更多的知识可以参考http://www.changhai.org/contents/science/mathematics/twin_prime.html。

Input
多组测试数据。每组数据一行输入一个正整数。

Output
对于每组测试数据判断输入的数是否是素数。如果是则在一行里输出Yes,否则输出No

Sample Input
3
4
5

Sample Output
Yes
No
Yes

Hint
求素数的方法有很多种，最简单的方法是根据素数的定义来求。 
对于一个自然数N，用大于1小于N的各个自然数都去除一下N，如果都除不尽，则N为素数，否则N为合数。 
如果N被某个数除尽，则break语句退出循环。 
注意：1不是素数 

Source
yhr
*/
#include <stdio.h>
int main(void)
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==1)
		{
			printf("No\n");
		}
		else
		{
			for(i=2;i<=(n/2);i++)
			{
				if(n%i==0)
				{
				break;
				}
			}
			if(i>(n/2))
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
	}
	return 0;
}
