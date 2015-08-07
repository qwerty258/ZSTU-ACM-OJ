/*
Description
求ax^2+bx+c=0方程的实根。a,b,c由键盘输入.

Input
输入三个数a,b,c

Output
输出方程的实根，如果方程有实根，则输出根；如果方程有2个不等实根，则分2行输出，第一行输出较大根，第二行输出较小根。 
其余情况（如无实根等）则输出No 

Sample Input
1 -3 2

Sample Output
2.000000
1.000000

Source
yhr
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c,d,m,n;
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
	{
		if(b==0)
		{
			printf("No\n");
		}
		else
		{
			 m=-c/b;
			 printf("%f\n",m);
		}
	}
	else
	{
		d=b*b-4*a*c;
		m=(-b+sqrt(b*b-4*a*c))/(2*a);
		n=(-b-sqrt(b*b-4*a*c))/(2*a);
		if(d<0)
		{
			printf("No\n");
		}
		else
		{
			if(d==0)
			{
				printf("%f\n",m);
			}
			else
			{
				if(m>n)
				{
					printf("%f\n%f\n",m,n);
				}
				else
				{
					printf("%f\n%f\n",n,m);
				}
			}
		}
	}
return 0;
}
