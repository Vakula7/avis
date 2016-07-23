#include <stdio.h>

main()
{
 int a,a1,t;
 scanf("%d%d",&a,&a1);
 if(a!=a1)
 {
     t=a;
     a=a1;
     a1=t;
 }
 printf("%d\t%d",a,a1);
 
    return 0;
}
