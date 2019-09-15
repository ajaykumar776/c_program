#include<stdio.h>

void find_asci_value_of_string(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++){
        printf("%c = %d\n",str[i],str[i]);

    }
}

void main()

{
    char str[100];
    printf("enter the sting:");
    gets(str);
    find_asci_value_of_string(str);



}


