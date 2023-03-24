#include <stdio.h>
void main()
{
  int c, first, last, middle, n, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 1;
  last = n;
  middle = (first + last) / 2;

  while (first <= last)
    (array[middle] != search);
  {

    //search in 2nd half
    if (array[middle] < search)
      first = middle + 1; //search is the middle element
    else if (array[middle] == search)
    {
      printf("Found at location %d.\n", middle);
    }

    //search is in the 1st half
    else
      last = middle - 1;
  }
  if (first > last)
    printf("Not found!");
}