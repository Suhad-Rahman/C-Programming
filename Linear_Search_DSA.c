#include<stdio.h>

int main() {
    
    int size, element, key, idx = -1;
    
    printf("Please enter the size of the Array: ");
    scanf("%d", &size);
    
    printf("Please enter the number of elements in the Array: ");
    scanf("%d", &element);
    
    int arr[size];
    
    printf("Please enter the elements: ");
    
    for(int i=0; i<element; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Please enter the key to search: ");
    scanf("%d", &key);
    
    for(int i=0; i<element; i++){
        if(arr[i] == key){
            idx = i+1;
            break;
        }
    }
    
    if(idx != -1){
        printf("Key is found at position %d !!", idx);
        return 0;
    }
    
    printf("The key is not found in the array!");
    
    return 0;
}