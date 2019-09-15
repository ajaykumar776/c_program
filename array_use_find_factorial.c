#include<stdio.h>

int fact(int a[],int pos,int n){
    int i,j,m=1,s;

    for(i=0;i<n;i++){
        if(i == pos){
           for(j =1; j<=a[pos];j++){
                m = j * m;
           }
        }
    }
    return m;

}


void main()
{
    int a[100]={1,2,3,4,5};
    int n=sizeof a/sizeof a[0];
    int pos,m;
    printf("enter the position of the array element");
    scanf("%d",&pos);
    m = fact(a,pos,n);
    printf("fact is %d",m);
}
