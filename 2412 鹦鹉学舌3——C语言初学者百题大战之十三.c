/*
Description
鹦鹉越来越会说话了，你可以说一句话（最多不要超过80个字符哦），鹦鹉也能很快把你的话重复一遍。

Input
输入一行，中间可能有空格，回车表示说完了。

Output
输出也为一行，输出刚才输入的内容。

Sample Input
I am a student.

Sample Output
I am a student.

Hint
可能需要用到字符数组的知识，如果不清楚可以自学哦。

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
