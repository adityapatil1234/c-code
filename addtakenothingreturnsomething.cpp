#include<stdio.h>
int add();
main()
{int a=add();
printf("sum=%d \n",a);
}
int add()
{int a,b,c;
printf("enter a number");
scanf("%d%d%d",&a,&b,&c);
return(a+b+c);
}
