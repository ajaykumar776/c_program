#include<stdio.h>
#include<math.h>
void main()
{
	int n,s,r,m,ch,i;
	printf("enter the choice\n");
	printf("1.reverse of a given number\n");
	printf("2.factorial\n");
	scanf("%d",&ch);
	printf("enter the number\n");
	scanf("%d",&n);
	switch(ch)
	{
		case 1:
		m=n;
		s=0;
		while(n!=0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
		printf("before reverse =%d\n",m );
		printf("after reverse=%d\n",s);
		break;

		case 2:
		 s=1;
		for(i=1;i<=n;i++){
		s=s*i;
	}
		printf("factorial =%d\n", s);
		default:

		printf("invalid\n");
		

	}

}