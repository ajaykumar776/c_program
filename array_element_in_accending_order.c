
#include<stdio.h>
void main()
{
    int a[]={1,9,8,7,6,5,4,3,2,10};
    int n=sizeof(a)/sizeof a[0];
    int i,j,tem;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){

            if(a[i]>a[j]){
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }

    }
         printf("\n accending order\n");
            for(i=0;i<n;i++){
            printf("%d ",a[i]);
    }
     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){

            if(a[i]<a[j]){
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }

    }
         printf("\n dccending order\n");
            for(i=0;i<n;i++){
            printf("%d ",a[i]);
    }



}
