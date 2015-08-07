/*
Description
上一题过的轻松吗？是不是老忘了scanf函数的格式？特别是那个&?以后不要再忘了哦？
那么再来一题吧。这题要求计算a+b的和了。

Input
输入2个整数a和b,中间用一个空格隔开

Output
输出为三行，
第1行输出 a=a,其中红色的a代替a的值，
第2行输出 b=b,其中红色的b代替b的值，
第3行输出 s=s,其中红色的s代替a+b的和，然后再换行。

Sample Input
1 2

Sample Output
a=1
b=2
s=3

Hint
是不是有点麻烦了？后面还有更麻烦的呢——

Source
yhr
*/
#include<stdio.h>
int main()
{
	int a,b,s;
	scanf("%d%d",&a,&b);
	printf("a=%d\nb=%d\ns=%d\n",a,b,s=a+b);
	return 0;
}
