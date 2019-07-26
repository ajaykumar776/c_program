#include<stdio.h>
void main(){

	int i, n=5, a[100], sum=0;

	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}

	for(i=0;i<n;i++){
		sum+=a[i];


	printf("%d\n", sum);
    }
}
