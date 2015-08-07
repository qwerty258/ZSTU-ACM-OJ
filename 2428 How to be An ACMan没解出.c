/*
Description
That day Qige bursting with passion solve a hard acm’s promble on ZSTU_ACM_laboratory. 
Because Qige must solve the problem to prove he is an AC_Man.but the problem is so KengDie . Qige fighting for Being an AC_Man throughout the night .There are many traps that we can describe there are some Small KENGs and Big KENGs. Can you be an AC_Man; Following is that problem. 
AC Goal was in a maze of magic.The maze is described as a N * M (2<=N, M <= 50) matrix. There are WALLs, ROADs, Small KENGs and Big KENGs in the maze. Qige want get the AC Goal. We assume that " get the AC Goal " is to get to the maze where AC Goal stays. When there's a KNEG in the grid, we will fall into it so we must climbed out of the KENG. We assume that we moving up, down, right, left takes 1 unit time, and Climbed out of the Small KENG takes 1 unit time, and Climbed out of the Big KENG takes 2 unit time . 
You have to calculate the minimal time to approach AC Goal. (We can move only UP, DOWN, LEFT and RIGHT, to the neighbor grid within bound, of course.) 

Input
First line is a integer T, the test cases.The first line of each case contains two integers N and M. Then N lines follows, every line has M characters. "." stands for road, "g" stands for AC Goal, "x" stands for Small KENG, "X" stands for Gig KENG, and "p" stands for the acmer.( There must be one and only one AC Goal and acmer )Process to the end of the file. 

Output
For each test case, your program should output a single integer, standing for the minimal time needed. If such a number does no exist, you should output a line containing a integer "-1". 

Sample Input
1
7 8 
#.#####. 
#.g#..p. 
#..#x... 
..#..#X# 
#...##.. 
.#...... 
........ 

Sample Output
13

Source
style_luo
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    int number,c,black,other,i,n;
    char a[101];
    while(gets(a)!=NULL)
    {
        n=strlen(a);
        number=0;
        c=0;
        black=0;
        other=0;
        for(i=1;i<=n;i++)
        {
            if(a[i-1]>='a'&&a[i-1]<='z'||a[i-1]>='A'&&a[i-1]<='Z')
            {
                c++;
            }
            else
            {
                if(a[i-1]>='0'&&a[i-1]<='9')
                {
                    number++;
                }
                else
                {
                    if(a[i-1]==' ')
                    {
                        black++;
                    }
                    else
                    {
                        other++;
                    }
                }
            }
        }
        printf("%d %d %d %d\n",c,number,black,other);
    }
    return 0;
}
