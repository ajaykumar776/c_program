#include<stdio.h>

int i, rem,sum=0,temp,min,max,c=0;
void Palindrome_range();
void main()
{

   Palindrome_range();
}

void Palindrome_range()

{

printf("enter the MIN value : \nMAX value :\n");
scanf("%d%d",&min,&max);
printf("your list are :\n");
   for(i=min;i<=max;i++){
      temp=i;
      sum=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         sum=sum*10+rem;
      }
      if(i==sum){
        printf("%d\n",i);
      }

   }

}
