#include<stdio.h>
//#include<stdlib.h>
void main()

{
    int a[10]={1,2,3,4,5,6,3};
    int n=sizeof(a)/sizeof a[0];
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            a[j]-a[i]==1;
        }
    }
}
