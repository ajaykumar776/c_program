#include<stdio.h>

void reverse(char str[])
{
    int c=0,i;
    for(i=0;str[i]!='\0';i++){
        c++;
    }
    printf("reverse string : ");
    for(i=c-1;i>=0;i--){
        printf("%c",str[i]);


    }
}
void main()
{
    char str[100];
    printf("enter the sting:");
    gets(str);
    reverse(str);
}
