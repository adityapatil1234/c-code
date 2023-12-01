#include<stdio.h>
main()
{int id,m1,m2,m3,total;
char name;
float avg;
printf("enter your id");
scanf("%d",&id);
printf("enter your name");
scanf("%c",&name);
printf("enter mark");
scanf("%d%d%d",&m1,&m2,&m3);
total=m1+m2+m3;
avg=total/3;
printf("\n total marks is %d",&total);
printf("\n avg mark is %f",&avg);
}
