#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5,6};
    int n= sizeof(a)/sizeof a[0];
    int p,i;
    printf("emter the value of p : \n");
    scanf("%d",&p);
    for(i=0;i<n;i++){
        if(i==3){
            a[i]='\0';
        }
    }
    printf("array after aasining the value \n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i] );
    }
}