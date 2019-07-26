#include<stdio.h>
#define MAX 100000

int a[MAX];

void init(){
    int i;
    for(i=0;i<MAX;i++) a[i]=1;
}

void create(){
    int i,j;

    for(i=2;i<MAX;i++){
        for(j=i+i;j<MAX;j+=i){
            a[j] = 0;
        }
    }
}

void print(){
    int i;
    for(i=0;i<20;i++) printf("%d ", a[i]);
    printf("\n");
}

void main()
{
    int n=10;
    init();
    create();
    print();

    if(a[n]==1) printf("prime");
    else printf("non prime");

    printf("\n");

    int i;
    for(i=10;i<100;i++){
        if(a[i]==1) printf("%d ", i);
    }
}
