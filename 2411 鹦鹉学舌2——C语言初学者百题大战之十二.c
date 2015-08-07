/*
Description
还记得以前做过的那题鹦鹉学舌吗？恩，不错，那次要求输入一个整数，然后你要输出该整数。
现在要求从终端（键盘）输入一个字符，以回车键确认，然后你的程序应该能输出该字符。

Input
输入一个字符，以回车确认

Output
输出你刚才输入的字符

Sample Input
e

Sample Output
e

Source
yhr
*/
#include<stdio.h>
int main()
{
	char a[100];
	gets(a);
	puts(a);
	return 0;
}
