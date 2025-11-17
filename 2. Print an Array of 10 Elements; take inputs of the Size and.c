#include<stdio.h>

int main() {
    
    int size;
    printf("Please Enter the Size of the Array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the element count (%d=>): ");
    int elements;
    scanf("%d", &elements);
    
    if(elements>size){
        printf("Error: Invalid Element Count!");
        return 1;
    }
    
    printf("Please enter the elements of the Array: ");
    
    for(int i=0; i<elements; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("The Array is as following - \n");
    
    for(int i=0; i<elements; i++){
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}