#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_the_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\n\n\t\t\t\t\t   QUIZ GAME\n\n");
     printf("\n\n\t\t\t\t\tWELCOME EVERYONE!\n\n");
     printf("\n\n\t\t\t\t________________________________________");
     printf("\n\t\t\t\t________________________________________");
     printf("\n\t\t\t\t > Press S to start the game");
     printf("\n\t\t\t\t > Press V to view the highest scores");
     printf("\n\t\t\t\t > Press R to reset the score");
     printf("\n\t\t\t\t > Press H for help menu");
     printf("\n\t\t\t\t > Press Q to exit the game");
     printf("\n\t\t\t\t________________________________________");
     printf("\n\t\t\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_the_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your name:");
     gets(playername);

    system("cls");
    printf("\n                    Welcome %s to Quiz Game ",playername);
    printf("\n\n Here are some tips before you start playing:\n");
    printf("\n > There are 2 rounds in this Quiz Game,WARMUP ROUND & MAIN ROUND.");
    printf("\n\n > In WARMUP ROUND, you will be asked a total of 6 questions to test your");
    printf("\n   general knowledge. You will be eligible to play the game if you give at least");
    printf("\n   4 correct answers. Otherwise, you can't proceed further to the MAIN ROUND.");
    printf("\n\n > Your game starts with the MAIN ROUND. In this round, you will be asked a");
    printf("\n   total of 10 questions. Each right answer will be awarded a point.");
    printf("\n\n > You will be given four options to choose from and you have to press A, B,");
    printf("\n   C or D for the correct option.");
    printf("\n\n > Your game will end when all 10 questions have been answered.");
    printf("\n\n\n\t              GOOD LUCK");
    printf("\n\n\n Press Y to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=6;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhat is the name of Russian Secret Service?");
		printf("\n\nA.KGB\t\tB.CIA\n\nC.RAW\t\tD.FSB");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D.FSB");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Switzerland");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWho was the founder of Mughal Empire?");
		printf("\n\nA.Babar\t\tB.Humayun\n\nC.Akbar\t\tD.Shahjahan");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Babar");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWho was awarded the best player award in Fifa World Cup 2014?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Lionel Messi");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWho was the main proponent of Deen-E-Elahi?");
        printf("\n\nA.Birbal\t\tB.Akbar\n\nC.Tanshen\t\tD.Gopal Var");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Akbar");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhat is the group of birds known as?");
		printf("\n\nA.A Herd\t\tB.A Mob\n\nC.A Flock\t\tD.An Army");
		if (toupper(getch())=='C' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		       getch();
		       break;}}
		       }

	if(count>=4)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO MOVE ON TO THE MAIN ROUND, BETTER LUCK NEXT TIME!");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATIONS %s! You are eligible to play the MAIN ROUND ***",playername);
     printf("\n\n\n\n\tPress any key to Start the MAIN ROUND!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       break;}

		case 2:
		printf("\n\n\nHatikva is the national anthem of....");
		printf("\n\nA.Turkey\t\tB.Pakistan\n\nC.Israel\t\tD.Afghanistan");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Israel");getch();
		       break;
		       }

        case 3:
		printf("\n\n\nThe highest waterfall in the world is...");
		printf("\n\nA.Tugela Falls\t\tB.YOSEMITE Falls\n\nC.Angel Falls\t\tD.Niagara Falls");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Angel Falls");getch();
		       break;}

        case 4:
		printf("\n\n\nWho is the only player to get a hattrick and a century in a single test match?");
		printf("\n\nA.Gazi\t\tB.Stokes\n\nC.Maxwell\t\tD.Kallis");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Gazi");getch();
		       break;
		       }

        case 5:
		printf("\n\n\nIn C language, which function doesn't take space as a character?");
		printf("\n\nA.gets\t\tB.scanf\n\nC.puts\t\tD.printf");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.scanf");
		       getch();
		       break;
		       }

		case 6:
		printf("\n\n\nEritrea, which became the 182nd member of the UN in 1993, is in the continent of...");
		printf("\n\nA.Asia\t\tB.Africa\n\nC.Europe\tD.Australia");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Africa");
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       break;}

        case 8:
		printf("\n\n\nEach year World Red Cross and Red Crescent Day is celebrated on...");
		printf("\n\nA.May 18\t\tB.May 8\n\nC.June 8\t\tD.June 18");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.May 8");getch();
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital city of Australia?");
		printf("\n\nA.Canberra\t\tB.Sydney\n\nC.Melbourne\t\tD.Adelaide");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Canberra");getch();
		       break;}

		case 10:
		printf("\n\n\nWhat is the smallest country in the world?");
		printf("\n\nA.Denmark\t\tB.Monaco\n\nC.Vatican City\t\tD.South Sudan");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Vatican City");getch();
		       break;}}}
	score:
    system("cls");
	score=(float)countr;
	if(score>0.00 && score<10)
	{
	   printf("\n\n\t\t             CONGRATULATIONS!");
	     printf("\n\t You got %.2f/10",score);
	     goto go;}

	 else if(score==10.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATIONS ****************");
	    printf("\n\t\t\t\t YOU GOT A PERFECT SCORE!!!");
	    printf("\n\t\t You got %.2f/10",score);
	    printf("\t\t Thank You For Playing!!!");
	}
	 else
{
	 printf("\n\n\t\t SORRY YOU GOT NO ANSWERS CORRECT");
	    printf("\n\t\t Thanks for your participation!");
	    printf("\n\t\t TRY AGAIN!!!");
	    goto go;}

	go:
	puts("\n\n Press Y if you want to play again");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_the_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has got the Highest Score of %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n\n\n                            Quiz Game");
    printf("\n\n\n > There are 2 rounds in this Quiz Game,WARMUP ROUND & MAIN ROUND.");
    printf("\n\n > In WARMUP ROUND, you will be asked a total of 6 questions to test your");
    printf("\n   general knowledge. You will be eligible to play the game if you give at least");
    printf("\n   4 correct answers. Otherwise, you can't proceed further to the MAIN ROUND.");
    printf("\n\n > Your game starts with the MAIN ROUND. In this round, you will be asked a");
    printf("\n   total of 10 questions. Each right answer will be awarded a point.");
    printf("\n\n > You will be given four options to choose from and you have to press A, B,");
    printf("\n   C or D for the correct option.");
    printf("\n\n > Your game will end when all 10 questions have been answered.");
    printf("\n\n\n\t              GOOD LUCK");
	}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
