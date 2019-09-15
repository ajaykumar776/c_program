#include <stdio.h>

void main()
{
   char str[1000], ch;
   int i, frequency = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);

   for(i = 0; i<=str[i]; i++)
   {
       if(ch == str[i])
           frequency++;
   }
   printf("Frequency of %c is %d", ch, frequency);
   return 0;
}
