#include<stdio.h>
main()
{int a,b,c;
printf("enter a three number");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{if(a>c)
printf("\n the %d is greater",a);
else
printf("\n the %d is greater",c);
}
else
{if(b>c)
printf("\n the %d is greater",b);
else
printf("\n the %d is greater",c);
}
}
