#include<stdio.h>

void convert_capital_to_samll_letter(char str[])
{

    int i;
    for(i=0;str[i]!='/0';i++)
    {
    if(str[i]>=65 && str[i]<=90){
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
