#include<stdio.h>

int main() {
    
    int size, element, j, min_idx;
    
    printf("Please enter the size of the Array: ");
    scanf("%d", &size);
    
    printf("Please enter the number of elements in the Array: ");
    scanf("%d", &element);
    
    int arr[size];
    
    printf("Please enter the elements: ");
    
    for(int i=0; i<element; i++){
        scanf("%d", &arr[i]);
    }
    
    //Selection sort
    
    for(int i=0; i<element-1; i++){
        
        min_idx = i;
        
        for(j=i+1; j<element; j++){
            
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
            
        }
        
        if(min_idx != i){
            
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            
        }
        
        
    }
    
    
    printf("The Sorted Array: ");
    
    for(int i=0; i<element; i++){
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}