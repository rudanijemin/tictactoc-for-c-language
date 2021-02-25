#include<stdio.h>
#include<stdlib.h>

void check(char p,char s);
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gamename()
{
	printf("\n\t\t\t TIC TAC TOE GAME");
}
void show()
{
	printf("\n\n\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
	printf("\t\t\t---|---|---\n");
}
void inputsymbol()
{
	printf("\nplayer 1 symbol X\n");
	printf("\nplayer 2 symbol 0\n");
}
void play()
{
	char p,s;
	printf("\nenter position and symbol for the player\n");
	fflush(stdin);
	scanf("%c",&p);
	fflush(stdin);
	scanf("%c",&s);
	check(p,s);
}
void check(char p,char s)
{
	int i;
	for(i=0;i<=8;i++)
	{
		if(a[i]==p)
		{
			a[i]=s;
		}
	}
}
void start()
{
	char pa;
	printf("\nenter who start the game: player 1 or player 2\n");
	scanf("%c",&pa);
}

int end()
{
	if((a[0]=='X'&&a[1]=='X'&&a[2]=='X') || (a[0]=='X'&&a[3]=='X'&&a[6]=='X') || (a[0]=='X'&&a[4]=='X'&&a[8]=='X'))
       	return (100);
	if((a[0]=='0'&&a[1]=='0'&&a[2]=='0') || (a[0]=='0'&&a[3]=='0'&&a[6]=='0') || (a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
	return (200);
	else if(a[1]=='X'&&a[4]=='X'&&a[7]=='X')
        return (100);
	else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
	return (200);
	else if((a[2]=='X'&&a[5]=='X'&&a[8]=='X') ||(a[2]=='X'&&a[4]=='X'&&a[6]=='X'))
        return (100);
	else if((a[2]=='0'&&a[5]=='0'&&a[8]=='0') ||(a[2]=='X'&&a[4]=='X'&&a[6]=='X'))
	return (200);
	else if(a[3]=='X'&&a[4]=='X'&&a[5]=='X')
	return (100);
	else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
	return (200);
	else if(a[6]=='X'&&a[7]=='X'&&a[8]=='X')
	return (100);
	else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
	return (200);
	return (300);
	
}
void main()
{
	int k;
	gamename();
	show();
	inputsymbol();
	start();
	play();
	
	label:
	system("cls");
	show();
	play();
	k=end();
	system("cls");
	show();
	if(k==100)
         	printf("\nplayer 1 won");
	else if(k==200)
         	printf("\nplayer 2 won");
	else
	   goto label;
	
}











