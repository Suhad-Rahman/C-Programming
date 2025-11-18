/*12. Declare an Array, take Size, Elements dynamically. If the  array has two or more even elements delete 2
even elements from the last position. If the array has only 1 even
element, insert 2 elements in the middle & the very next index. If
there is no even element, then delete the middle indexed element
and insert a new element to the very next index of the middle
index. [Take elements for insertion dynamically]. Count odd and even
elements in the array to solve the problem */

#include<stdio.h>

int main() {
    
    int size, elements, even=0, odd=0;
    
    printf("Please enter the size of the Array: ");
    scanf("%d", &size);
    
    if(size<0){
        printf("Please enter valid size.");
        return -1;
    }
    
    int arr[size];
    
    printf("Please enter the element count: ");
    scanf("%d", &elements);
    
    if(elements>size || elements<=0){
        printf("Invalid Element Count! Please enter a valid count.");
        return -1;
    }
    
    printf("Please enter the elements: ");
    
    for(int i=0; i<elements; i++){
        scanf("%d", &arr[i]);
        
        if((arr[i]&1)){
            odd++;
        }
        else{
            even++;
        }
    }
    
    int mid = elements/2;
    
    if(even>=2){
        
        int del = 0;
        
        for(int i=elements-1; i>=0 && del<2; i--){
            
            if(arr[i]%2 == 0){
                
                for(int j = i; j<elements-1; j++){
                    arr[j] = arr[j+1];
                }
                
                del++;
                elements--;
                i++;
                
            }
            
        }
        
    }
    
    else if(even == 1){
        
        if(elements+2 >size){
            printf("The array contains only one even element! but the insertion cannot be done due to the low capacity of the Array.");
            return -1;
        }
        
        int new_elem [2];
        
        printf("Please enter 2 new elements: ");
        
        for(int i=0; i<2; i++){
            scanf("%d", &new_elem[i]);
        }
        
        for(int i = elements-1; i>=mid; i--){
            arr[i+2] = arr[i];
        }
        
        arr[mid] = new_elem[0];
        arr[mid+1] = new_elem[1];
        
        elements += 2;
    }
    
    else{
        
        for(int i=mid; i<elements-1; i++){
            arr[i] = arr[i+1];
        }
        
        elements--;
        
        int value;
        
        printf("Please enter the new element to insert: ");
        scanf("%d", &value);
        
        for(int i=elements-1; i>mid+1; i--){
            arr[i] = arr[i-1];
        }
        
        arr[mid+1] = value;
        
        elements++;
    }
    
    
    printf("\n\nThe Final Array: ");
    
    for(int i=0; i<elements; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
