#include<stdio.h>
int add(int,int,int);
main()
{int a,b,c;
printf("enter a number");
scanf("%d%d%d",&a,&b,&c);
int x=add(a,b,c);
printf("sum=%d\n",x);
}
int add(int x,int y,int z)
{return(x+y+z);
}
