#include<stdio.h>

void main()
{
    char str[1000];
    int i,upp=0,low=0,dig=0,symb=0;
    printf("plz enter any string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        if(str[i]>=65&&str[i]<=90){
            upp++;
        }else if(str[i]>=97&&str[i]<=122){
            low++;
        }else if(str[i]>=48&&str[i]<=57){
            dig++;
        }else
            symb++;
    }

    printf("upper case is = %d \n",upp);
    printf("lower case is = %d \n",low);
    printf("digit is = %d \n",dig);
    printf("special chracter is= %d \n",symb);


}

