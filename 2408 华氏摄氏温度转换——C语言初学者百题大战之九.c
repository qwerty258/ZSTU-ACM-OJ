/*
Description
输入一个华氏温度，根据公式C=(5/9)(F-32)计算对应的摄氏温度。

Input
输入一个华氏温度值。

Output
输出输入的华氏温度和转换后的摄氏温度值。
输出为一行，具体详见示例

Sample Input
100

Sample Output
fahr=100.000000,celsius=37.777779

Hint
两个变量应定义为float类型。

Source
*/
#include<stdio.h>
int main()
{
	float fahr,celsius;
	scanf("%f",&fahr);
	printf("fahr=%.6f,celsius=%.6f\n",fahr,celsius=5.0*(fahr-32)/9);
	return 0;
}
