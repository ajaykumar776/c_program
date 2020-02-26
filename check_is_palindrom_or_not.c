#include<stdio.h>

int palindrom(char str[],int l)
{
    int flag=1,i;
    for(i=0;i<l/2;i++){
        if(str[i]!= str[l-i-1])
            flag=0;
    }
    return flag;
}

void main()

{
    char str[20];
    printf("enter the the string");
    scanf("%s",str)
    int l = strlen(srr);
    int flag;
    flag=palindrom(str,l);

    if(flag==1)
    {
        printf("it is pallindrom");
    }
    else
        printf("it is not palindrom");

}

