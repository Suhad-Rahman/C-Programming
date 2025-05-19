#include<stdio.h>
int main(){
int A[15], i, clone, j, flag;
printf("Enter The List You want Sorted(limit 15 elements!)= ");
for(i=0; i<15; i++){
    scanf("%d", &A[i]);
}
printf("\n\nIntial Array= ");
for(i=0; i<15; i++){
    printf(" %d ", A[i]);
}
for(i=0; i<15-1; i++){
flag=0;
    for(j=0; j<15-i-1;j++){
        if(A[j]<A[j+1]){
            clone=A[j];
            A[j]=A[j+1];
            A[j+1]=clone;
            flag=1;
        }
    }
    if(flag==0){
        break;
    }
}
printf("\n\nSorted Array[Descending]= ");
for(i=0; i<15; i++){
    printf(" %d ", A[i]);
}
return 0;
}
