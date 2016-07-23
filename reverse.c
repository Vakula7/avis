#include <stdio.h>
#include<string.h>
int main()
{
   int a,i,s=0,r=0;
   scanf("%d",&i);
   while(i>0)
   {
       rev=i%10;
       s=s*10+rev;
       i=i/10;
   }
   printf("%d",s);
    return 0;
}
