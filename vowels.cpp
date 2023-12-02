#include<stdio.h>
#include<string.h>
main()
{int count=0,i;
char str[20];
printf("enter string");
gets(str);
str/wr(str);
for(i=0;str[i]='\0';i++)
{if(str[i]=='a'str[i]=='e';str[i]=='i'str[i]=='0'str[i]=='u')
count++;
}
printf("vowels in string:%d",count);
}
