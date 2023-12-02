#include<stdio.h>
struct student
{int id;
char name[20];
float per;
};
main()
{struct student stu;
printf("enter id");
scanf("%d",&stu.id);
printf("enter name");
scanf("%s",&stu.name);
printf("enter percentage");
scanf("%f",&stu.per);
printf("student indormation");
printf("student id:%d \n",stu.id);
printf("student name:%s \n",stu.name);
printf("student per:%f \n",stu.per);
}
