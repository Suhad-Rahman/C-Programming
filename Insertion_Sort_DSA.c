#include<stdio.h>

int main() {
    
    int size, element, j;
    
    printf("Please enter the size of the Array: ");
    scanf("%d", &size);
    
    printf("Please enter the number of elements in the Array: ");
    scanf("%d", &element);
    
    int arr[size];
    
    printf("Please enter the elements: ");
    
    for(int i=0; i<element; i++){
        scanf("%d", &arr[i]);
    }
    
    //Insertion sort
    
    for(int i=1; i<element; i++){
        
        j=i;
        
        while(j>0 && arr[j-1] > arr[j]){
            
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            
        }
        
    }
    
    printf("The Sorted Array: ");
    
    for(int i=0; i<element; i++){
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}