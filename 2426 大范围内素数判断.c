﻿/*
Description
【1】求10000以内的所有素数。 
素数是除了1和它本身之外再不能被其他数整除的自然数。由于找不到一个通项公式来表示所有的素数，所以对于数学家来说，素数一直是一个未解之谜。像著名的 哥德巴赫猜想、孪生素数猜想，几百年来不知吸引了世界上多少优秀的数学家。尽管他们苦心钻研，呕心沥血，但至今仍然未见分晓。 
自从有了计算机之后，人们借助于计算机的威力，已经找到了2216091以内的所有素数。 
求素数的方法有很多种，最简单的方法是根据素数的定义来求。对于一个自然数N，用大于1小于N的各个自然数都去除一下N，如果都除不尽，则N为素数，否则N为合数。 
但是，如果用素数定义的方法来编制计算机程序，它的效率一定是非常低的，其中有许多地方都值得改进。 
第一，对于一个自然数N，只要能被一个非1非自身的数整除，它就肯定不是素数，所以不 
必再用其他的数去除。 
第二，对于N来说，只需用小于N的素数去除就可以了。例如，如果N能被15整除，实际 
上就能被3和5整除，如果N不能被3和5整除，那么N也决不会被15整除。 
第三，对于N来说，不必用从2到N一1的所有素数去除，只需用小于等于√N(根号N)的所有素数去除就可以了。这一点可以用反证法来证明： 
如果N是合数，则一定存在大于1小于N的整数d1和d2，使得N=d1×d2。 
如果d1和d2均大于√N，则有：N＝d1×d2>√N×√N＝N。 
而这是不可能的，所以，d1和d2中必有一个小于或等于√N。 
基于上述分析，设计算法如下： 
(1)用2，3，5，7逐个试除N的方法求出100以内的所有素数。 
(2)用100以内的所有素数逐个试除的方法求出10000以内的素数。 
首先，将2，3，5，7分别存放在a[1]、a[2]、a[3]、a[4]中，以后每求出一个素数，只要不大于100，就依次存放在A数组中的一个单元 中。当我们求100—10000之间的素数时，可依次用a[1]－a[2]的素数去试除N，这个范围内的素数可以不保存，直接打印。 
【2】用筛法求素数。 
简单介绍一下厄拉多塞筛法。厄拉多塞是一位古希腊数学家，他在寻找素数时，采用了一种与众不同的方法：先将2－N的各数写在纸上： 
2，3，4，5，6，7，8，9，10，11，12，13，14，15，16，17，18，19，20，21，22，23，24，24，26，27，28，29，30，31，32，33，34，35，36，37，38，39，40... 
在2的上面画一个圆圈，然后划去2的其他倍数；第一个既未画圈又没有被划去的数是3，将它画圈，再划去3的其他倍数；现在既未画圈又没有被划去的第一个数 是5，将它画圈，并划去5的其他倍数……依次类推，一直到所有小于或等于N的各数都画了圈或划去为止。这时，表中画了圈的以及未划去的那些数正好就是小于 N的素数。 
(2)，(3)，4，(5)，6，(7)，8，9，10，(11)，12，(13)，14，15，16，(17)，18，(19)，20，21，22，(23)，24，25，26，27，28，(29)，30，(31)，32，33，34，35，36，(37)，38，39，40... 
这很像一面筛子，把满足条件的数留下来，把不满足条件的数筛掉。由于这种方法是厄拉多塞首先发明的，所以，后人就把这种方法称作厄拉多塞筛法。 
在计算机中，筛法可以用给数组单元置零的方法来实现。具体来说就是：首先开一个数组：a[i]，i=1，2，3，…，同时，令所有的数组元素都等于下标 值，即a[i]=i，当i不是素数时，令a[i]=0 。当输出结果时，只要判断a[i]是否等于零即可，如果a[i]=0，则令i=i+1，检查下一个a[i]。 
筛法是计算机程序设计中常用的算法之一。 
【3】用6N±1法求素数。 
任何一个自然数，总可以表示成为如下的形式之一： 
6N，6N+1，6N+2，6N+3，6N+4，6N+5 (N=0，1，2，…) 
显然，当N≥1时，6N，6N+2，6N+3，6N+4都不是素数，只有形如6N+1和6N+5的自然数有可能是素数。所以，除了2和3之外，所有的素数都可以表示成6N±1的形式(N为自然数)。 
根据上述分析，我们可以构造另一面筛子，只对形如6 N±1的自然数进行筛选，这样就可以大大减少筛选的次数，从而进一步提高程序的运行效率和速度。 
   I        3       6       9      12     15
   J      0   1   0    1  0   1   0   1  0   1
 2(I+J)-1 3   7   11  13  17  19  23  25 29  31
在程序上，我们可以用一个二重循环实现这一点，外循环i按3的倍数递增，内循环j为0－1的循环，则2(i+j)-1恰好就是形如6N±1的自然数。

Input
有多组测试数据， 
每组一行，输入一个不大于1000000的正整数

Output
对于每组输入输出一行，如果是素数，则输出Yes,否则输出No 

Sample Input
7
3
4

Sample Output
Yes
Yes
No

Source
yhr
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a[168],i,j,k,n;
	a[0]=2;
	a[1]=3;
	a[2]=5;
	a[3]=7;
	k=4;
	for(i=11;i<=100;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i%a[j]==0)
			{
				break;
			}
		}
		if(j>=4)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=101;i<=1000;i++)
	{
		for(j=0;j<25;j++)
		{
			if(i%a[j]==0)
			{
				break;
			}
		}
		if(j>=25)
		{
			a[k]=i;
			k++;
		}
	}
	while(scanf("%d",&n)!=EOF)
	{
		if(n==1)
		{
			printf("No\n");
		}
		else
		{
			for(i=0;a[i]<=sqrt(n);i++)
			{
				if(n%a[i]==0)
				{
					break;
				}
				else
				{
					continue;
				}
			}
			if(a[i]>sqrt(n))
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
