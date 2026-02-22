#include<stdio.h>
#include<conio.h>
int main()
{
int n,m;
char you,com;
clrscr();
printf("enter the no btw 1 to 100");
scanf("%d",&m);
n=m;
if(n<33)
{
com='s';
}
else if(n>33&&n<66)
{
com='p';
}
else
{
com='z';
}
printf("enter the your choice(s is stone p is pepper z is zisser) ");
scanf(" %c",&you);
if(you=='s'&&com=='s')
{
printf("the match will draw");
}
else if(you=='s'&&com=='p')
{
printf("computer is win");
}
else if(you=='s'&&com=='z')
{
printf("you is win");
}
else if(you=='p'&&com=='p')
{
printf("the match will draw");
}
else if(you=='p'&&com=='s')
{
printf("you is win");
}
else if(you=='p'&&com=='z')
{
printf("computer is win");
}
else if(you=='z'&&com=='z')
{
printf("the match will draw ");
}
else if(you=='z'&&com=='p')
{
printf("you is win");
}
else if(you=='z'&&com=='s')
{
printf("computer is win");
}
else
{
printf("your choice is incorrect");
printf("try later bye");
}
getch();
return 0;
}


