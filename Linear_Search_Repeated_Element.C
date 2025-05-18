#include<stdio.h>
int main(){

int w[15]={12, 23, 34, 45, 56, 12, 67, 78, 89, 90, 12, 54, 23, 56, 23};
int n, i, count=0, flag=1;

printf("The List= ");
for(i=0; i<15; i++){
    printf(" %d ", w[i]);
}
printf("\n\nSearch for= ");
scanf("%d", &n);

for(i=0; i<15; i++){
    if(w[i]==n){
        printf("\nThe Element %d is found at position %d!\n", n, i+1);
        count++;
        flag=0;
    }
}
if(flag==1){
    printf("\nElement %d is not Found!");
}
else if(count>1){
printf("\nElement %d is found %d times!", n, count);
}
else{
    printf("\nElement %d is found Once!", n);
}

return 0;
}
