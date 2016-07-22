#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char c;
scanf("%c",&c);
if(isdigit(c))
{
printf("\nnumber");
}
  else
	{	
  	printf("\ncharacter");
	}
return 0;
}
