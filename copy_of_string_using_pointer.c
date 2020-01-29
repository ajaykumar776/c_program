#include<stdio.h>
#include<stdio.h>
#include<string.h>
void stcpy(char *str1,char *str2);
void stcpy(char *str1,char *str2)
{
	int i ,len=0;
	while(*(str1+len)!='\0');
	len++;
	for(i=0;i<len;i++){
		*(str2+i)=*(str1+i);
		*(str2+i)='\0';
	}
}
void main()
	{
		int ch ,i,j,flag=0;
		char str1[100],str2[100],str3[100];
		char *ptr1,*ptr2,t;
		//printf("copy of a string  \n");
		puts("enter a string\n");
		scanf("%s",str1);
		strcpy(str2,str1);
		printf("str2 = %s",str2);
		//return 0;
	}


