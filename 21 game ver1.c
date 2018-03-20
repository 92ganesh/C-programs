#include<stdio.h>
#include<conio.h>
#include<math.h>

void main ()
{   int ans1,ans2,n,a,b;
    printf("PRINT Start by user(1)or computer(2)?\n");
    printf("SCAN ");scanf("%d",&ans1);
    if (ans1<=0||ans1>=3)
    {
        printf("PRINT please enter only 1 for user start or 2 for computer start");
    }
    else
    {if(ans1==1)
     {
        a=0;printf("\nType 0 and start the game.\nSCAN ");scanf("%d",&n);
     }
     else if(ans1==2)
     {
        a=1;printf("PRINT 1\n");
     }
     for(ans2=1||n; ans2<=19&&ans2<=a+3;)
     {
     printf("SCAN ");scanf("%d",&ans2);
     if(ans2<=a+3)
     {switch(ans2)
        {
            case 1:
            case 5:
            case 9:
            case 13:
            case 17:
                printf("\nPRINT %d\n",a=ans2+3);
            break;
            case 2:
            case 6:
            case 10:
            case 14:
            case 18:
                printf("\nPRINT %d\n",a=ans2+2);
            break;
            case 3:
            case 7:
            case 11:
            case 15:
            case 19:
            case 4:
            case 8:
            case 12:
            case 16:
                printf("\nPRINT %d\n",a=ans2+1);
            break;

            case 20:
                printf("\nPRINT 21. \nyou won the game\n");
            break;
            case 21:
                printf("\nPRINT you lose the game\n");
        };
     }
     else
        {
            printf("dont try to cheat game.\n");
        }
     };
}

    /*plus 1 or plus 2 or plus 3 till 21.
    whoever speak 21 loses the game.
    example user=1
            c=3
            u=6
            c=9
            .
            .
            .
            c/u=21 loses the game*/
}
