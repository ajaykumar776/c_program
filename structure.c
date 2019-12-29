#include<stdio.h>
#include<string.h>

struct bank
{
 int accno;
 int pasword;
 struct cust1
 {
    char name[20];
    float bal;

 }pdf;
}cust1;

void main()
{
  struct bank cust1;
  cust1.accno=1234;
  cust1.pasword=12345;
  strcpy(cust1.pdf.name,"ajay");
  cust1.pdf.bal=123456;
  printf("account no = %d\n",cust1.accno );
  printf(" paword=%d\n",cust1.pasword );
  printf("%s\n",cust1.pdf.name );
  printf("%f\n",cust1.pdf.bal );

}