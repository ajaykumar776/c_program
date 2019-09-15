#include<stdio.h>
void main()
{
    int i;
    int b[5]={5,4,3,2,1};
    int a[5]={1,2,3,4,5};
    for(i=0;i<10;i++){
        a[i]=a[i];
    }
    for(i=0;i<5;i++){
        b[i];
    }
    for(i=0;i<5;i++){

        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];

    }
    for(i=0;i<5;i++){

        printf("%d ",a[i]);
    }

    printf("\n");
}
