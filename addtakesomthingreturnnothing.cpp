#include<stdio.h>
void add(int,int,int);
main()
{int a,b,c;
printf("enter a number");
scanf("%d%d%d",&a,&b,&c);
add(a,b,c);
}
void add(int a,int b,int c)
{printf("sum=%d\n",(a+b+c));
}
