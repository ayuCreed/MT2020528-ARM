 #include <stdio.h>
int main()
{
    int a[20],i,even=0;
    
    printf("Enter whole numbers of array : ");
    for(i=0; i<20; i++)
    {
        scanf("%d",&a[i]);
    }
 
     for(i=0; i<20; i++)
    {
          if(a[i]%2==0)
          even++;		         
    }
     printf("even numbers in array: %d",even);
    return 0;
}