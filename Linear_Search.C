#include<stdio.h>
int main(){

int rr[]={5, 10, 15, 17, 20, 23, 25, 30, 47, 35, 13, 50};
int n, i, pos=-1;

printf("Enter Search Item= ");
scanf("%d", &n);

for(i=0; i<12; i++){
    if(n==rr[i]){
        pos= i+1;
        break;
    }
}
if(pos==-1){
    printf("\nElement Not Found!\n");
}

else{
    printf("\nElement(%d) found at position %d!!\n",n, pos);
}

return 0;
}
