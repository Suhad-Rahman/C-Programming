/*8. Declare an Array, take Size, Elements dynamically. Insert an
  element in any of the Even index position except 0th index.
   [Take the position dynamically] */
   
#include<stdio.h>

int main() {
    
    int size, elements, value, position;
    
    printf("please enter the size of the Array: ");
    scanf("%d", &size);
    
    printf("Please enter the number of elements in the Array: ");
    scanf("%d", &elements);
    
    if(elements>size || size<0 || elements<0){
        printf("Error: Please enter valid Size and Element Count!!!");
        return -1;
    }
    
    int arr[size];
    
    printf("please enter the elements: ");
    
    for(int i=0; i<elements; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("please enter the position you want to insert: ");
    scanf("%d", &position);
    
    if(position<0 || position>size || position%2 != 0){
        printf("Error: Please enter a valid position for insertion!!!");
        return -1;
    }
    
    printf("Please enter the new value: ");
    scanf("%d", &value);
    
    for(int i=elements; i>position; i--){
        arr[i] = arr[i-1];
    }
    
    arr[position] = value;
    
    elements++;
    
    printf("\n\nThe Array After Insertion: ");
    for(int i=0; i<elements; i++){
        
        printf("%d ", arr[i]);
    }
    
    return 0;
}