/*
Description
Given 2 positive integer x(1<=x<=1000) and y(1<=y<=1000), you are to count the Greatest Common Divisor and the Lease Common Multiple of x and y.

Input
there are multi test cases. 
x and y, one line for each test.

Output
Output the Greatest Common Divisor and the Lease Common Multiple of x and y in one line for each test.

Sample Input
12 18
3 9

Sample Output
6 36
3 9

Hint
学几个单词： 
Greatest Common Divisor 最大公约数 
Lease Common Multiple 最小公倍数 
positive integer 正整数 
最大公约数可以用辗转相除法 
最小公倍数＝x*y/最大公约数 
例题：辗转相除法求gcd(326,78) 
326=4×78+14...........(78,14) 
78=5×14+8.............(14,8) 
14=1×8+6..............(8,6) 
8=1×6+2...............(6,2) 
6=3×2+0...............(2,0) 
所以gcd(326,78)=2 
用while循环来实现 
while(y！=0) 
{ 

} 

Source
hh
*/
#include<stdio.h>
int main(void)
{
	int a,b,r,m,n;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		m=a;
		n=b;
		while(m%n!=0)
		{
			r=m%n;
			m=n;
			n=r;
		}
		printf("%d %d\n",n,a*b/n);
	}
	return 0;
}
