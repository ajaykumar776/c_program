#include<stdio.h>

void check_consant_or_vowel(char st[])
{
    char str[10];
    int i,vowel=0,cons=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]== 'i' ||str[i]=='o' ||str[i]=='u' )
        {
            vowel++;

        } else {
            cons++;
        }
    }
    printf("vowel is = %d",vowel);
    printf("cons is = %d",cons);


}
void main()
{

    char str[100];
    printf("enter a string :");
    gets(str);
    check_consant_or_vowel(st[10]);



}
