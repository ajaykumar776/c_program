#include<stdio.h>
#include<string.h>
int main()
{

    int hh,mm,ss;
    scanf("%d%d%d",&hh,&mm,&ss);
    char a[3];
    scanf("%s",a);

    if(hh <= 12 && mm <= 59 && ss <= 59)      
    {
        if((hh != 0) && (hh != 12))
        {
            hh = hh + 12;
            
        }
        if(hh == 12)
        {
            hh = 0;
        }
      
        printf("%02d:%02d:%02d%s\n", hh, mm, ss,a);
    }
    else
    {
        printf("Provide the correct inputs.");
    }
    return 0;
}
