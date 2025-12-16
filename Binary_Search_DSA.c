#include<stdio.h>

int main() {
    
    int size, element;
    
    printf("Please Enter the size & element count of the array: ");
    scanf("%d %d", &size, &element);
    
    int arr[size];
    
    printf("Please enter the elements: ");
    for(int i=0; i<element; i++){
        scanf("%d", &arr[i]);
    }
    
    //Binary Search
    
    printf("Please enter the number to search: ");
    int target;
    scanf("%d", &target);

    int left = 0;
    int right = element-1;
    int idx = -1;
    
    while(left <= right){
        
        int mid = left + (right - left)/2;
        
        if(target == arr[mid]){
            idx = mid;
            break;
        }
        
        else if(target < arr[mid]){
            right = mid - 1;
        }
        
        else if(target > arr[mid]){
            left = mid + 1;
        }
        
    }
    
    if(idx != -1){
        printf("The target element is found at position %d!!!", idx+1);
        return 0;
    }
    
    printf("The target element is not available in the array!!!");

    
    return 0;
}