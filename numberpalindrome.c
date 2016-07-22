#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	int r[10];
	int revno=0;
	int t=0;
	int l=0;
	int c=0;
	printf("\nEnter a number");
	scanf("%d",&n);
	t=n;
	//printf("\nl=%d",t);
	while(t>0)
	{
		c=t%10;
		//printf("\nc=%d",c);
		t=t/10;
		//printf("\nt=%d",t);
		r[l]=c;
		//printf("\nr[l]=%d",r[l]);
		l++;
		//printf("\nl=%d",l);
	}
	for(int i=0;i<l;i++)
	{
	revno+=r[i]*pow(10,l-(i+1));
	//printf("\nrevno=%d",revno);
	}
	if(no==revno)
	{
	printf("\npaindrome");
	}	
	else
	{
		printf("\nnot a palindrome");
	}
return 0;
}
