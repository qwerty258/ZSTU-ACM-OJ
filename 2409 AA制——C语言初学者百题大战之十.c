/*
Description
AA制是现代青年流行的一个名词。所谓AA制其实就是几个朋友一起吃饭、玩，其中的费用平摊。现在要求你编写一个程序来计算每个人需要承担的费用。

Input
输入分2行，
第一行输入1个整数n(n>0)，表示共有n个人平摊费用
第二行输入3个数，分别是这次去玩的3个项目的开支（单位是元）

Output
输出一行，计算出每个人应该承担的费用，精确到分(保留2位小数）

Sample Input
3
12 14.6 13.3

Sample Output
13.30

Source
yhr
*/
#include<stdio.h>
int main()
{
	float a,b,c,d,n;
	scanf("%f",&n);
	scanf("%f%f%f",&a,&b,&c);
	printf("%.2f\n",d=(a+b+c)/n);
	return 0;
}
