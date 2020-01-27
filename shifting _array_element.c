#include<stdio.h>
void main()
{
    int n,pos,i,num;
    int a[100];
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter the element of an array \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the position of the element\n");
    scanf("%d",&pos);
    printf("enter the number insert in array \n");
    scanf("%d",&num);
    for(i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=num;
    n++;
    printf("after assing the value in the array \n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i] );
    }
}