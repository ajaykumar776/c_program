#include<stdio.h>
#include<string.h>
void reverse(char str[]);
void main()
{
  char str[100];
    printf("enter the string \n");
    scanf("%s",str);
    reverse(str);

}
void reverse(char str[])
{
    int c=0;
    int i;
    
    for(i=0;str[i]!=0;i++){
        c++;
    }
    printf("before reversing=%s\n",str );
    printf("reverse of the string \n");
    for(i=c-1;i>=0;i--){
        printf("%c",str[i] );
    }

}