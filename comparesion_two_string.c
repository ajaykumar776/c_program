#include<stdio.h>
int compare(char *str1,char *str2);
void main()
{
	char str1[10],str2[10];
	int x=0;
	printf("Enter first string  : \n");
	scanf("%s",str1);
	printf("Enter second string : \n");
	scanf("%s",str2);
	x = compare(str1,str2);
	if(x == 1) printf("Equal");
	else printf("not equal\n");
}
int compare(char *str1,char *str2){
	while(*str1 == *str2){
		if(*str1 == '\0' && *str2 == '\0')
			return 1;
		str1 ++;
		str2 ++;
	}
}
