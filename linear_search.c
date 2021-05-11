/*
==================================================================================================
compelet code: to search data using linear way
==================================================================================================
*/
#include <stdio.h>
int main()
{
  int array[100], search, stor, size;
  
  /*
    we are going to decide the size of the arrray */
  printf("Enter number of elements in array\n");
  scanf("%d", &size);
  
  /* 
    enter the data to the array */
  printf("Enter %d integer(s)\n", size);

  /* data will be stor in the variable 'stor' */
  for (stor = 0; stor < size; stor++)
    scanf("%d", &array[stor]);

    /* 
      to search data from array */
  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (stor = 0; stor < size; stor++) {
      if (array[stor] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, stor+1);
      break;
    }
  }
  if (stor == size)
    printf("%d isn't present in the array.\n", search);

  return 0;
}
