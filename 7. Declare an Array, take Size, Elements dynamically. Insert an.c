/*7. Declare an Array, take Size, Elements dynamically. Insert an
   element at any position of the array. [Take the elements & position dynamically]*/
   
#include<stdio.h>

int main() {
    
    int size, elements, value, position;
    
    printf("Please enter the size of the Array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Please enter the number of elements you want to store in the Array: ");
    scanf("%d", &elements);
    
    if(elements>size || elements<0 || size<0){
        printf("Error: Invalid operation, please enter valid input!!!");
        return -1;
    }
    
    printf("Please enter the elements: ");
    
    for(int i=0; i<elements; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Please enter the Value you want to input and the Position: ");
    scanf("%d %d", &value, &position);
    
    if(elements==size){
        printf("Error: Insertion cannot be done due to short of space.");
        return -1;
    }
    
    if(position<0 || position>size){
        printf("Error: Please enter valid Position!!!");
        return -1;
    }
    
    
    for(int i=elements; i>position; i--){
        arr[i] = arr[i-1];
    }
    
    arr[position] = value;
    
    elements++;
    
    printf("\n\nArray After insertion: ");
    
    for(int i=0; i<elements; i++){
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}