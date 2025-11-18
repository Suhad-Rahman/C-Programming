/*10. Declare an Array, take Size, Elements dynamically. Delete an
    element in any of the Odd index position. [Take the position
    dynamically] */
   
#include<stdio.h>

int main() {
    
    int size, element, position;
    
    printf("Please enter the size of the Array: ");
    scanf("%d", &size);
    
    if(size<0){
        printf("Error: Please enter a valid size");
        return -1;
    }
    
    int arr[size];
    
    printf("Please enter the element count: ");
    scanf("%d", &element);
    
    if(element>size || element<0){
        printf("Please enter valid element count.");
        return -1;
    }
    
    printf("Please enter the elements: ");
    
    for(int i=0; i<element; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Please enter the odd indexed position you want to delete: ");
    scanf("%d", &position);
    
    if(position%2 || position<0 || position>size){
        printf("Error: Please enter valid Position!");
        return 1;
    }
    
    for(int i = position; i<element-1; i++){
        arr[i] = arr[i+1];
    }
    
    element--;
    
    printf("\n\nThe Array after deletion: ");
    
    for(int i=0; i<element; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}