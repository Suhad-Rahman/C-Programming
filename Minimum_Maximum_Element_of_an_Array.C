#include<stdio.h>
int main(){
int array[100], i, n, min, max;

 printf("How many inputs do you need?\nEnter Input Count= ");
 scanf("%d", &n);

for(i=0; i<n; i++){
    printf("\nEnter Element %d= ", i+1);
    scanf("%d", &array[i]);
}

max=array[0];

for(i=0; i<n; i++){
    if(array[i]>max){
        max= array[i];
    }
}

min=array[0];

for(i=0; i<n; i++){
    if(array[i]<min){
        min=array[i];
    }
}

printf("\nThe Maximum Element is= %d\n", max);
printf("The Minimum Element is= %d\n", min);

return 0;
}
