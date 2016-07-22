#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	int power=0;
	int i=1;
	int power1=0;
	printf("\nEnter a number");
	scanf("%d",&no);
	printf("\nEnter power");
	scanf("%d",&power);
	power1=power;
	if(power==0)
	{
		printf("\n%d power %d is 1",no,power);
	}
	else
{
	while(power>0)
	{
		i=i*no;
		power--;
	}
	printf("\n%d power %d is %d",no,power1,i);	
}
return 0;
}
