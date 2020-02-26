 #include<string.h>
 #include<stdio.h>
void main()
{

    int hh,mm,ss;
    char a[10];
    printf("enter the HH : MM: SS : \n");
    scanf("%d%d%d",&hh,&mm,&ss);
    printf("enter string: AM or PM :\n");
    scanf("%s",a);

 if(hh <= 12 && mm <= 59 && ss <= 59)      
    {
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) 
           && (hh != 0) && (hh != 12))
        {
            hh = hh + 12;
        }
        if((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0) && (hh == 12))
        {
            hh = 0;
        }
        printf("The obtained 24-hour format of input is \t");
        printf("%02d:%02d:%02d", hh, mm, ss);
        printf("\n\n");
    }
    else
    {
        printf("Provide the correct inputs.");
    }
}