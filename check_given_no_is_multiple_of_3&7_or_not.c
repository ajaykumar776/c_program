
#include<stdio.h>


void check_given_no_is_multiple_or_not(int n)
{

    if(n>0){
        printf("it is positive no\nbut ");

            if(n%3==0&&n%7==0){

                printf("given no are multiple of both");

            }
            else if(n%3==0){

                printf("it is multiple of 3");

            }else if(n%7==0){

                printf("given number is multiple of 7");

            }else

                printf("given no is neither multiple 3 and 7");
    }

}
void main()

{
    int n;
    printf("enter the positive no ");
    scanf("%d",&n);
    check_given_no_is_multiple_or_not(n);
}
