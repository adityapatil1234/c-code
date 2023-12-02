#include<stdio.h>
main()
{int arr1[2][2],arr2[2][2],i,j;
printf("enter element of matrix1 \n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{scanf("%d",&arr1[i][j]);
}
}
printf("enter element of matrix matrix2 \n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{scanf("%d",& arr2[i][j]);

}
}
printf("matrix 1 is \n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)

{printf("%d",arr1[i][j]);
}
printf("\n");
}
printf("matrixis\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{printrf("%d",arr2[i][j]);
}
printf("\n");
}
}
