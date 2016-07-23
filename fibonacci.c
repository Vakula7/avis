#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("\nEnter a number");
scanf("%d",&num);
for(int a=1;a<=15;a++)
{
	printf("\n%d * %d = %d",num,a,num*a);
}
return 0;
}
