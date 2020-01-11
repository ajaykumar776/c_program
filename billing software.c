#include<stdio.h>
//#include<stdlib.h>

void main()
{
	char a[20];
	int price=0,gst=0,total=0;
	printf("\n ==========BILLING SOFTWARE OF AJAY COLD COFFE CENTER==========\n\n");
	printf("              ========================================\n");
	printf("\n==========WELCOME To AJAY COLD COFFE CENTER===========\n\n");
	printf("\nEnter the iteams : ");
	scanf("%s",a);
	printf("\nenter the price of the iteams : ");
	scanf("%d",&price);
	gst=((price/100)*18);
	total=gst+price;
	printf("\n ================================================================\n");
	printf("\n ITEAM PRICE WITH GST TOTAL \n");
	printf("\nIteam=%s\nPrice=%d\nGst=%d\nTotal=%d \n",a,price,gst,total );
	printf("\n             =======================================\n");
	printf("\n                           THANK YOU              \n");



}
