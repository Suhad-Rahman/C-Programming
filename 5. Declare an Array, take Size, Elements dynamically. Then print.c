/*5. Declare an Array, take Size, Elements dynamically. Then print
   Even indexed elements from the Array.*/
   
#include<stdio.h>

int main() {
    
    int size, elements;
    
    printf("Please enter the size of the Array: ");
    scanf("%d",&size);
    
    printf("Please enter the number of elements of the Array (<=%d): ", size);
    scanf("%d", &elements);
    
    if(elements>size){
        printf("Error: Elements count cannot exceed the array size.");
        return -1;
    }
    
    int arr[size];
    
    printf("Please enter the elements of the Array: ");
    
    for(int i=0; i<elements; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\n\nThe even indexed elements of the array -> ");
    
    for(int i=0; i<elements; i++){
        if(i % 2==0){
            printf("%d ",arr[i]);
        }
    }
    
    return 0;
}