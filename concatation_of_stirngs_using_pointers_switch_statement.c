#include<stdio.h>
#include<string.h>

void main()
{
	int ch,i,j,flag=0;
	char str1[100];
	char str2[100];
	char str3[100];
	char  *ptr1,*ptr2;	
	//while(1)
	//{

		printf("\nenter your choices\n");
		printf("1.cancatinate of two string \n");
		printf("2,find the lenght h of the two string  \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("enter the two string \n");
				scanf("%s%s",str1,str2);
				ptr1=str1;
				ptr2=str2;
				j=0;
				for(;*ptr1!='\0';ptr1++){
					str3[j]=*ptr1;
					j++;
				}
				for(;*ptr2;ptr2++){
					str3[j]=*ptr2;
					j++;
				}
				printf("Concayed string is \n");
				printf("%s",str3);
				break;
			}
			case 2:
			{
			printf("enter any string \n");
			scanf("%s",str1);
			j=0;
			ptr1=str1;
			for(;*ptr1!='\0';ptr1++){
				j++;
			}
			printf("length of the string is %d \n",j);
			break;
			}
		default :
			printf("no choice \n");
		}
	//}
}