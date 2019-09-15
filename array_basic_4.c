#include<stdio.h>

void main(){
	int i, n, a[100], sum=0;

	printf("Enter total number: ");
	scanf("%d", &n);

        for(i=0;i<n;i++){
		//printf("Number %d: ", i+1);
		scanf("%d", &a[i]);
		sum+=a[i];
        }

        //for(i=0;i<n;i++){
		//sum+=a[i];


	printf("Total sum is %d\n", sum);
}
