#include<stdio.h>
int main() {
    int row;
    printf("Enter the number of rows= ");
    scanf("%d", &row);
    
    for(int i=1; i<=row; i++){
        for(int j=1; j<=row; j++){
            if(i>1 && i+j>row){
                printf("%d ", i);
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    
    
    return 0;
}