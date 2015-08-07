/*
Description
水是生命之源。每个人每天都需要摄取一定的水分才能满足生理上的需求。人体每天至少应从饮食中补充2200毫升的水。那么你喝的水够了吗？
假设你每天摄取的水分全凭喝水，那么你计算下你到底喝了多少水。喝水时你使用的是圆柱形的水杯。

Input
输入为一行。该行有2个数，分别表示半径和喝的水高（单位：毫米）。

Output
输出为一行，内容为喝的水的毫升数，精确到2位小数

Sample Input
1 1

Sample Output
3.14

Hint
圆周率用3.14

Source
yhr
*/
#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f%f",&a,&b);
	printf("%.2f\n",c=3.14*a*a*b);
	return 0;
}
