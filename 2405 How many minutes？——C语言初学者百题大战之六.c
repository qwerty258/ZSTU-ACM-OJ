/*
Description
How many minutes do you spend on the problem?

Input
The input consists of two lines.
The first line contains two integer h1 and m1, separated from the symbol :, and h1:m1 is the time you begin to do the problem.
The second line contains two integer h2 and m2, separated from the symbol :, and h2:m2 is the time you finished the problem.

Output
You should output how many minutes you have spended on the problem on one line.

Sample Input
9:10
9:20

Sample Output
10

Source
yhr
*/
#include<stdio.h>
int main()
{
	int h1,m1,h2,m2,a;
	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);
	printf("%d\n",a=(m2-m1)+(h2-h1)*60);
	return 0;
}
