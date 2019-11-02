#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3];
    int i,j,k,sum;
    printf("enter the A matrix\n");

        for(i=0;i<=2 ;i++)
            for(j=0;j<=2;j++)
                scanf("%d\n",&A[i][j]);


            printf("enter the B matrix\n");

        for(i=0;i<=2;i++)
            for(j=0;j<=2;j++)
                scanf("%d\n",&B[i][j]);


            for(i=0;i<3;i++){

            for(j=0;j<3;j++){
                        sum=0;
                for(k=0;k<3;k++){
                    sum=sum+A[i][k]*B[k][j];
                        C[i][j]=sum;
                    }
                }

            }
             for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    printf("%d  ",C[i][j]);
                }
                printf("\n");
            }

}
