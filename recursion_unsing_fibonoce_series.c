#include<stdio.h>
void maxmin(int a[],n)
{

    int min,max,i;
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
        min=a[i];
        }
        if(a[i]>max){
         max=a[i];
        }
    }
    printf("%d%d\n",max,min );
}
void main()
{
    int a[10]={1,2,3,4,4,5,};
    int n=6;
    maxmin(a,n);

}