#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
srand(time(0));
int Q[50], n, i, count=0, f=0;

for(i=0; i<50; i++){
    Q[i]=rand()%31;
}
printf("The Array= ");
for(i=0; i<50; i++){
    printf(" %d ", Q[i]);
}

printf("\nSearch for= ");
scanf("%d", &n);

for(i=0; i<50; i++){
    if(Q[i]==n){
        printf("\nElement %d is found at Positon %d!!\n", n, i+1);
        f=1;
        count++;
    }
}
if(f==0){
    printf("\nElement %d is not found.\n", n);
}
else if(f=1 && count>1){
    printf("\nElement %d is found %d times.\n", n, count);
}
else{
    printf("\nElement %d is found Once.\n", n);
}

return 0;
}
