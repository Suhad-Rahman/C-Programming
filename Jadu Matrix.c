#include <stdio.h>
#include<stdbool.h>

int main() {
	
	int N, M;
	scanf("%d %d", &N, &M);
	
	if(N != M){
	    printf("NO");
	    return 0;
	}
	
	int input;
	bool flag = true;
	
	for(int i=0; i<N; i++){
	    for(int j=0; j<M; j++){

	        scanf("%d", &input);
	        
	        if(i==j || i+j == M-1){
	            
	            if(input != 1){
	            flag = false;
	            }
	        }
	        
	        else if(input != 0){
	            flag = false;
	        }
	    }
	}
	
	if(flag == true){
	    printf("YES");
	}
	
	else{
	    printf("NO");
	}
	

return 0;
}

