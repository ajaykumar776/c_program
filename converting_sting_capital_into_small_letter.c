#include<stdio.h>

void convert_capital_to_samll_letter(char str[])
{

    int i;
    for(i=0;str[i]!='\n';i++)
    {
    if(str[i]>='A' && str[i]<='Z'){
    str[i]+= 32;
    }else
            str[i]-=32;
    }
    printf("converting string is %s",str);


}

void main()

{
     char str[100];
     printf("enter the sting:");
     gets(str);
     convert_capital_to_samll_letter(str);
}


