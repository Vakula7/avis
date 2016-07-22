#include<stdio.h>
#include<conio.h>
int main()
{
int n[3];
int r=0;
for(int i=0;i<3;i++)
{
scanf("%d",&n[i]);
}
for(int i=0;i<3;i++)
{
	if(n[i]>r)
	{
		r=n[i];
	}
}
printf("\n%d",r);
return 0;
}
