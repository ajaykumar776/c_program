#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,n;
    float *element;

    printf(" Input total number of elements(1 to 100): ");
    scanf("%d",&n);
    element=(float*)calloc(sizeof(float),n); 
    //printf("%p\n",element); // Memory is allocated for 'n' elements 
    printf("\n");
    for(i=0;i<n;i++)  
    {
       scanf("%f",element+i);
       //printf("%p\n",element+i);
    }

    for(i=1;i<n;i++)  
    {
       if(*element<*(element+i))
           *element=*(element+i);
    }
    printf(" The Largest element is :  %f \n\n",*element);
  
}
