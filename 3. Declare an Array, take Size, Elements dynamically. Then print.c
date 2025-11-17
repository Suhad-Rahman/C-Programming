/*3. Declare an Array, take Size, Elements dynamically. Then print
   Even elements from the Array*/

#include<stdio.h>

int main() {
    
    int size, elements;
    
    printf("Please enter the size and the element count of the array : ");
    scanf("%d %d", &size, &elements);
    
    int arr[size];
    
    if(elements>size){
        printf("Error: Invalid Element Count!!!");
        return 1;
    }
    
    printf("Please enter the elements(%d): ", elements);
    
    for(int i=0; i<elements; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\n\nThe Even Elements of the Array : ");
    
    for(int i=0; i<elements; i++){
        
        if(!(arr[i] & 1)){
            printf("%d ", arr[i]);
        }
    }
    
    
    return 0;
}