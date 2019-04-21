#include <stdio.h>
#include <stdlib.h>

int n, *arr, i;

void Insert(){
  
  printf("\nEnter the size of the array");
  scanf("%d", &n);
  
  arr = (int*) calloc(n, sizeof(int));
  
  if(arr != NULL){
    printf("\nInput %d integer numbers", n);
    
    for (i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
  }
}

void Delete(){
  int element, count = 0, index;
  printf("\nWhich element you want to delete from the given array");
  scanf("%d", &element);
  
  for(i = 0; i < n; i++){
    if(element == arr[i]){
      ++count;
    }
  }
  
  if(count != 0){
    printf("\nThe element %d found in the following positions", element);
    for(i = 0; i < n; i++){
      if(element == arr[i]){
        printf("\n%d", i);
      }
    }
    
    printf("\nWhich index you’re targeting?");
    scanf("%d", &index);
    
    for(i = index - 1; i < n - 1; i++){
      arr[i] = arr[i + 1];
    }
    
    
    printf("\nThe element %d at the index %d removed successfully", element, index);
    n -= 1;
  }else{
    printf("\nThe element %d was not found in the given array", element);
  }
}

void Display(){
  for(i = 0; i < n; i++){
    printf("\n%d", arr[i]);
  }
}

int main(void) {
  int choice;
  do{
    printf("\nWhat do you want to do\n1. Insert\n2. Delete\n3. Display\n4. Exit");
    scanf("%d", &choice);
    
    switch(choice){
      case 1: Insert(); break;
      case 2: Delete(); break;
      case 3: Display(); break;
      case 4: exit(0); break;
    }
  }while(choice != 4);
  return 0;
}
