#include<stdio.h>

void decimal_to_binary(int n){
    int a[10], count=0, i, rem;
    while(n){
        rem = n%2;
        a[count] = rem;
        n=n/2;
        count++;
    }

    for(i=0;i<count;i++){
        printf("%d", a[count-1-i]);
    }
    printf("\n");
}

void main()
{
    int n=10;
    decimal_to_binary(n);
}
