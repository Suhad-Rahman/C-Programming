#include<stdio.h>
int main() {
    int row, alpha=65;
    
    printf("Please enter the row: ");
    scanf("%d", &row);
    
    for(int i=1; i<=row; i++){
        for(int j=1; j<=row; j++){
            if(i!=1 && j!=1 && i!=row && j!=row){
                
                if(alpha==91){
                    alpha=65;
                }
                
                printf("%c ", alpha++ );
            }
            else{
                printf("* ");
            }
            
            
        }
        
        printf("\n");
    }
    
    
    return 0;
}