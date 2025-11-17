/*4. Declare an Array, take Size, Elements dynamically. Then print
   Odd elements from the Array.*/

#include<stdio.h>

int main() {
    
    int size, elements;
    
    printf("Please enter the size and the element count of the Array: ");
    scanf("%d %d", &size, &elements);
    
    if(elements>size){
        printf("Error: Invalid input for elements!!!");
        return 1;
    }
    
    int arr[size];
    
    printf("Please enter the elements of the Array: ");
    
    for(int i=0; i<elements; i++){
        
        scanf("%d", &arr[i]);
        
    }
    
    printf("\n\nThe Odd elements of the Array: ");
    
    for(int i=0; i<elements; i++){
        
        if(arr[i] & 1){
            printf("%d ", arr[i]);
        }
        
    }
    
    return 0;
}