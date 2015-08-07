#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int n,c,x;
    printf("This is a small game,the computer will think a number \nbetween 0 to 100,then you can guess what the number is.\nIf you want to exit game,please enter 123.\n");
    printf("Plesae guess a number(0-100):\n");
    while(scanf("%d",&n)!=EOF)
    {
        if(n==123)
        {
            break;
        }
        srand((unsigned)time(NULL));
        x=rand()%100+1;
        c=1;
        while(n!=x)
        {
            if(n>x)
            {
                printf("You number is bigger than mine,Please try again.\n");
                scanf("%d",&n);
                c++;
            }
            else
            {
                printf("You number is smaller than mine,Please try again.\n");
                scanf("%d",&n);
                c++;
            }
        }
        switch(c)
        {
            case 1:printf("God like!\n");break;
            case 2:printf("You are genius!\n");break;
            case 3:printf("Terrific!\n");break;
            case 4:printf("Brillent!\n");break;
            case 5:printf("Excellent!\n");break;
            case 6:printf("Good!\n");break;
            case 7:printf("Good!\n");break;
            case 8:printf("Just so so.\n");break;
            case 9:printf("Just so so.\n");break;
            case 10:printf("Not bad.\n");break;
            default:printf("Oh,man,you are foolish\n");break;
        }
        printf("\n");
        printf("If you want to exit game,please enter 123.\nPlesae guess a number(0-100):\n");
    }
    return 0;
}