#include <stdio.h>
int main()
{
  int array[20],c, d, swap;

  for (c = 0; c < 20; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < 20 - 1; c++)
  {
    for (d = 0 ; d < 20 - c - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
        printf("Sorted list in ascending order:\n");

  for (c = 0; c < 20; c++)
     printf("%d\n", array[c]);

 return 0;
}