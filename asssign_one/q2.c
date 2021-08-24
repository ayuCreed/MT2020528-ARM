
#include <stdio.h> 
int main()
{
    int a[15],i,max;
   
    printf("Enter elements in array : ");
    for(i=0; i<15; i++)
    {
        scanf("%d",&a[i]);
    }
 
    max=a[0];
    for(i=1; i<15; i++)
    {   
		   if(max<a[i])
		    max=a[i];       
    }
          printf("\nmaximum of array is : %d",max);
    return 0;
}