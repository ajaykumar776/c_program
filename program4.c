#include<stdio.h>
#include<string.h>
void check(char ar[],int n);
void main()
{
    char ar[100];
    printf("enter the number  :\n");
    scanf("%s",ar);
    int n=strlen(ar);
    //printf("%s\n",ar );
    check(ar,n);

}
void check(char ar[],int n)
{
    int i,flag=0;
    for(i=0;i<n;i++){
    if(ar[i]=='.'){
        flag=1;
    }
    }
    if(flag==1){
        printf("============GIVEN NUMBER IS FLOAT TYPE ===========\n");
    }else
    printf("================GIVEN NUMBER IS INTEGER TYPE=========== \n");
}