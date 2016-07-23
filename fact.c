#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n=0;
	int nu[3];
	int e=2;
	int i=0;
	int su=0;
	int lo=0;
	int up=0;
	printf("\nEnter lower limit");
	scanf("%d",&lo);
	printf("\nEnter upper limit");
	scanf("%d",&up);
	for(int t=lo;t<=up;t++)
{
	int c=t;
	for(int i=t;i>0;)
	{
		k=i%10;
		nu[e]=i;
		//printf("\nnu[%d]=%d",e,nu[e]);
		i=i/10;
		e--;
	}
	e=2;
	for(int i=0;i<3;i++)
	{
		su=su+pow(nu[i],3);
		//printf("\nsu=%d",su);
	}
	if(check==su)
	printf("\n%d is an armstrong no.",check);
	su=0;
}
return 0;
}
