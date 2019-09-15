#include<stdio.h>\

void main()
{

    char str[100];
    int i,c=0;
    printf("enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        c++;
    }
    printf("total character is =%d",c);
}


