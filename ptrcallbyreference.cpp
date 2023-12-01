#include<stdio.h>
void swap(int*,int*);
main()
{int a,b;
printf("enter two integer");
scanf("%d%d",&a,&b);
printf("\n value before swaping are a= %d\t b=%d",a,b);
swap(&a,&b);
printf("\n value after swaping are a=%d\t b=%d",a,b);
}
void swap(int*x,int*y)
{int z;
z=*x;
*x=*y;
*y=z;
}
