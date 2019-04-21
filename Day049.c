#include <stdio.h>
 
void swap(int *xp, int *yp)
{
 *xp = *xp + *yp;
 *yp = *xp - *yp;
 *xp = *xp - *yp;
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   for(int i = 0; i < n; i++){
     for(int j = 0; j < (n - 1); j++){
       if(arr[j] > arr[j+1]){
         swap(&arr[j], &arr[j+1]);
       }
     }
   }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
   for(int i = 0; i < size; i++){
     printf("%d\n", arr[i]);
   }
}
 
// Driver program to test above functions
int main(void)
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size_of_the_array = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size_of_the_array);
    printArray(arr, size_of_the_array);
    return 0;
}
