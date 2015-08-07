/*
Description
输入三角形的三边长，求三角形面积。为简单起见，设输入的三边长a,b,c能构成三角形。

Input
输入为一行，输入三角形的三条边长。

Output
输出为一行，计算出该三角形的面积，精确到小数点后2位

Sample Input
3 4 5

Sample Output
6.00

Hint
面积可以按下面的公式计算 
s=sqrt(p(p-a)(p-b)(p-c))其中p=(a+b+c)/2

Source
yhr
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,s;
	scanf("%f%f%f",&a,&b,&c);
	p=(a+b+c)/2;
	printf("%.2f\n",s=sqrt(p*(p-a)*(p-b)*(p-c)));
}
