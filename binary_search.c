/* To compelet code using c 
 / to search at first/last/middil
*/
#include <stdio.h>
int main()
{
  /* According to the  problem we just declear all the thing witch we will use */
  int c, first, last, middle, n, search, array[100];
  
  /* we are taking input form user 
     witch will decid how long array you are going to use  
  */
  printf("Enter size \n");     
  scanf("%d", &n);
  
  /* we are inputing hear data to the array */
  printf("Enter %d integers\n", n);

  /* this is the loop
     will run size time(witch you have decided: how long array you have created)
  */
 for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  /* taking input to search data */
  printf("Enter value to find\n");
  scanf("%d", &search);
 
  /* we just divided into the three part(search bar)
     as for the requarment */
  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}