#include <stdio.h>

int main() {
	
	long long t;
	scanf("%d", &t);
	
	while(t--){
	    
	    long long N, a, b, c;
	    scanf("%lld %lld %lld %lld", &N, &a, &b, &c);
	    
	    long long multi = a*b*c;
	    
	    if(N % multi == 0){
	        printf("%lld\n", N/multi);
	    }
	    
	    else{
	        printf("-1\n");
	    }
	    
	}

return 0;
}

