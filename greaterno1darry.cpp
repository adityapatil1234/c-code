#include<stdio.h>
main()
{int arr[100],i,n,g;
printf("enter size of arr");
scanf("%d",&n);
printf("element are");
g=arr[0];
for(i=0;i<n;i++);
{if (arr[i]>g)
g=arr[i];
}
printf("greater number is %d",g);
}
