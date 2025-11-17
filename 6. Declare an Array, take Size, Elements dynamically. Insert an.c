/*6. Declare an Array, take Size, Elements dynamically. Insert an
   element in the last index. [Take the elements dynamically]*/
   
#include<stdio.h>

int main() {
    
    int size, elements, position, value;
    
    printf("Please enter the size of the Array = ");
    scanf("%d", &size);
    
    if(size<0){
        printf("Error: Invalid Size!!!");
        return -1;
    }
    
    printf("Please enter the size of the elements = ");
    scanf("%d", &elements);
    
    if(elements<0 || elements>size){
        printf("Error: Please enter the valid Elements Count!!!");
        return -1;
    }
    
    int arr[size];
    
    printf("Please enter the elements of the Array -> ");
    
    for(int i=0; i<elements; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Please enter the value you want to insert: ");
    scanf("%d", &value);
    
    arr[elements] = value;
    elements++;
    
    printf("Array after insertion: ");
    for(int i=0; i<elements; i++){
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}