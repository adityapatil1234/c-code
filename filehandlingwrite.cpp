#include<stdio.h>
struct student
{int id;
char name[20];
};
main()
{struct student stu;
FILE *fp;
fp=fopen("myfile.txt","wb");
printf("enter student information");
scanf("%d%s",&stu.id,&stu.name);
fwrite(&stu,sizeof (stu),1,fp);
printf("recorded");
fclose(fp);
}
