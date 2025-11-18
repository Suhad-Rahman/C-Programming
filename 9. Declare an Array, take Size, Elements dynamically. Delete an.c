/*9. Declare an Array, take Size, Elements dynamically. Delete an
  element from the last position. [Take the position
   dynamically] */
   
#include<stdio.h>

int main() {
    
    int size, element, position;
    
    printf("Please enter the size of the size of the Array: ");
    scanf("%d", &size);
    
    if(size<0){
        printf("Error: Please enter a valid size.");
        return -1;
    }
    
    int arr[size];
    
    printf("please enter the number of element in the array: ");
    scanf("%d", &element);
    
    if(element>size || element<0){
        printf("Please enter a valid element count!!!");
        return -1;
    }
    
    printf("Please enter the elements: ");
    
    for(int i=0; i<element; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\n\nThe Array After deleting the value from the last postion: ");
    
    element--;
    
    for(int i=0; i<element; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}