#include<stdio.h>

int palindrom(char ar[],int l)
{
    int flag=1,i;
    for(i=0;i<l;i++){
        if(ar[i]!= ar[l-i-1])
            flag=0;
    }
    return flag;
}

void main()

{
    char ar[20];
    printf("enter the the string");
    gets(ar);
    int l = strlen(ar);
    int flag;
    flag=palindrom(ar,l);

    if(flag==1)
    {
        printf("it is pallindrom");
    }
    else
        printf("it is not palindrom");

}

