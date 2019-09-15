 //Write a C program to create an array taking two middle elements from a given array of integers of length even.



#include<stdio.h>

void creat(int a[],int b[],int n)
{

    int temp1,temp2,i;
    if(n%2==0){
    temp1=a[(n/2)];
    temp2=a[(n/2)-1];
    printf("middle element is \n%d %d\n",temp2,temp1);

    }

    for(i=0;i<2;i++){

    if(i==0){
        b[i]=temp2;
        printf("your new array b element\n");
        printf("%d ",b[i]);
    }else{
        b[i]=temp1;
        printf(" %d ",b[i]);
    }

    }

}

void main()

{

   int a[]={1,2,3,4,5,6},i;
   int b[2];
   int n=(sizeof(a)/sizeof(a[0]));
   creat(a,b,n);

}
