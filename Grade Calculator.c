#include<stdio.h>
int main(){
    int n;
    printf("Enter the marks: ");
    scanf("%d", &n);
    
    if(n<60){
        printf("\nLetter Grade: F* Failure\n");
    }
    
    else if(n>=60 && n<=66){
        printf("\nLetter Grade: D Poor\n");
    }
    
    else if(n>=67 && n<=69){
        printf("\nLetter Grade: D+\n");
    }
    
    else if(n>=70 && n<=72){
        printf("\nLetter Grade: C-\n");
    }
    
    else if(n<=73 && n>=76){
        printf("Letter Grade: C Average");
    }
    
    else if(n>=77 && n<=79){
        printf("Letter Grade: C+");
    }
    
    else if(n>=80 && n<=82){
        printf("Letter Grade: B-");
    }
    
    else if(n>=83 && n<=86){
        printf("Letter Grade: B Good");
    }
    
    else if(n>=87 && n<=89){
        printf("Letter Grade: B+");
    }
    
    else if(n>=90 && n<=92){
        printf("Letter Grade: A-");
    }
    
    else if(n>=93){
        printf("Letter Grade: A Excellent");
    }
    
                 return 0;
}