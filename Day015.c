#include<stdio.h>
#include<stdlib.h>
int main()
{
  int size, *pointer, i;
  printf("Enter the number of variables to be allowed");
  scanf("%d",&size);
  pointer = malloc(size * sizeof(int));
  printf("%lu bytes of memory allocated successfully", (size * sizeof(int)));
  printf("\nBase Address is %p", pointer);
  for(i = 1; i <= size; i++){
    *pointer = i;
    printf("\nThe address of %d is %p and its value is %d", i, pointer, *pointer);
  }
return 0;
}
