#include <stdio.h>
#include <conio.h>
	void game_set (int num);
	void invalid_check (num,valid);
void main()
{ //welcome
 printf ("\t\t*****************\t\t\n");
 printf ("\t\t*\t\t*\t\t\n");
 printf ("\t\t*   WELCOME !!  *\t\t\n");
 printf ("\t\t*\t\t*\t\t\n");
 printf ("\t\t*****************\t\t\n");
 printf("\n\n\tPress any key to start the game\n\t\t");
 getch ();


while (1){
int first_play,n,num=1,valid=1,result=1,restart;
clrscr ();
printf ("who will make 1st move\npress:-\t'1' for computer\n\t'2' for yourself\n");
printf ("your choice:- ");
scanf ("%d",&first_play);
//to assign value of when for the 1st player
if (first_play==1){
	   printf ("So you want me to play 1st\nokk then here I go\n");
  }else if (first_play==2){
	  printf ("you want to play 1st!!\nokk then start when you are ready\n");
      invalid_check (1,0);
      game_set (0);
      num=21;
      result=0;
		}else { 
		printf ("invalid input...press any key to re-enter");
		getch();
		getch ();
		continue;
		}
	
	while (num!=21){
		  printf ("  me:- %d\n",num);
		  //to check invalid input
	   while(1){
	   	printf ("user:- ");
	   	scanf ("%d",&num);
      if (num!=valid+1&&num!=valid+2&&num!=valid+3)
         {printf ("\t\tinvalid input...Try again\n\t(%d,%d,%d are the only valid inputs)\n ",valid+1,valid+2,valid+3);
         continue; }
         break;
	   }//end of invalid checking while
		 
		 if (num!=4&&num!=8&&num!=12&&num!=16&&num!=20)
		    {game_set (num);
		      result=0;
		      break;
		    }
		 num++;
		 valid=num;
	}
	if (result==1){
		  printf ("  me:- 21\n");
		  printf ("\t\tYou win!!");
		}
	
	//restart
	printf ("\nThanks for playing!!!\nDo u want to play again?\n");
	printf ("press:-\t'1' to restart the game\n\t'2' to exit\nyour choice:- ");
	while (1){
	  scanf ("%d",&restart);
	   if (restart==1||restart==2)
	     {  break;
	   }else {  printf ("invalid input...please re-enter");
	   }
	}
	if (restart==1){ continue;
	}else if (restart ==2)
	{ printf ("\tBye!! Have a Good Day!!");
	  break;
	 }
	
	
}
}//end of main




// this function start when computer play 1st or computer get chance to choose 4,8,12,16,20
	void game_set (int num){
		int valid=num;
	while (num!=21)
	  {    
      if (num <4)
         num=4;
      else if (num <8)
         num=8;
      else if (num <12)
         num=12;
     else if (num<16)
	        num=16;
	    else 
	      { num=20;
	         printf ("  me:- 20\n");
	         break;
	      }
	     printf ("  me:- %d\n",num);
	     valid=num; 
	   
	   //to check invalid input
	   while(1){
	   	printf ("user:- ");
	   	scanf ("%d",&num);
      if (num!=valid+1&&num!=valid+2&&num!=valid+3)
         {printf ("\t\tinvalid input...Try again\n\t(%d,%d,%d are the only valid inputs)\n ",valid+1,valid+2,valid+3);
         continue; }
         break;
	   }//end of invalid checking while
	  }//end if while (num!=21)
		printf ("\t\tYou Lost\n\tBetter luck next time");
	}//end of game_set ()
	
	void invalid_check (num,valid){
		//to check invalid input
	   while(1){
	   	printf ("user:- ");
	   	scanf ("%d",&num);
      if (num!=valid+1&&num!=valid+2&&num!=valid+3)
         {printf ("\t\tinvalid input...Try again\n\t(%d,%d,%d are the only valid inputs)\n ",valid+1,valid+2,valid+3);
         continue; }
         break;
	   }//end of invalid checking while
	}