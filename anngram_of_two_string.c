#include<stdio.h>
#include<string.h>

int is_anagram(char str1[], char str2[])
{
    int a1[26], a2[26], n=26, len1, len2, i;
    char c;

    for(i=0;i<n;i++){
        a1[i]=0;
        a2[i]=0;
    }

    // for str1 ram
    len1 = strlen(str1);
    for(i=0;i<len1;i++){
        c=str1[i];
        a1[c-'a']++;
    }
    for(i=0;i<26;i++) printf("%d ", a1[i]);
    printf("\n");

    // for str2 ram
    len2 = strlen(str2);
    for(i=0;i<len2;i++){
        c=str2[i];
        a2[c-'a']++;
    }
    for(i=0;i<26;i++) printf("%d ", a2[i]);
    printf("\n");

    int flag = 1;
    for(i=0;i<26;i++){
        if(a1[i] != a2[i]) flag=0;
    }

    return flag;
}

void main()
{

    char str1[5]="ram";
    char str2[7]="arm";

    if(is_anagram(str1, str2) == 1){
        printf("anagram");
    }else{
        printf("not anagram");
    }
}
