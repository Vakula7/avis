#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("\nEnter a number");
	scanf("%d",&i);
	for(int n=(i-1);n>=0;n--)
	i+=n;
	printf("\n%d",i);
	return 0;
}
