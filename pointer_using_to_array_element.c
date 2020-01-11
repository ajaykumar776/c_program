#include <stdio.h>
int main()
{
   int arr1[25], i,n;
   printf("enter the value of n\n");
   scanf("%d",&n);
   printf("enter teh array element\n");
   for(i=0;i<n;i++){

        scanf("%d",&arr1[i]);

    }

    printf("entered araay element are : \n");
    for(i=0;i<n;i++)

    {
      printf("%d\n",*arr1+i);
    }
}