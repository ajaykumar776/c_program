#include<stdio.h>
void main()
{
    char str[10];
    int n=1;
    printf("enter the string : ");
    gets(str);
    while(str[n]!=0){
        n++;
    }
    printf("length of the string is = %d",n);
}
