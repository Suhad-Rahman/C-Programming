#include<stdio.h>
#include<stdlib.h>
int main(){
int a, b, c, d, i, j;
printf("Enter the dimensions of the first array= ");
scanf("%d %d", &a, &b);

printf("Enter the dimensions of the second array= ");
scanf("%d %d", &c, &d);
int x[a][b],y[c][d], z[a][b];


for(i=0; i<a; i++){
    for(j=0; j<b; j++){
        x[i][j]= rand()%31;
    }
}

for(i=0; i<c; i++){
    for(j=0; j<d; j++){
        y[i][j]= rand()%31;
    }
}
printf("\nMatrix A-->\n");
for(i=0; i<a; i++){
    for(j=0; j<b; j++){
        printf("%3d ", x[i][j]);
    }
    printf("\n");
}
printf("\n\nMAtrix B-->\n");
for(i=0; i<c; i++){
    for(j=0; j<d; j++){
        printf("%3d ", y[i][j]);
    }
    printf("\n");
}
if(a==c && b==d){
printf("\nAddition\nMAtrix C-->\n");
for(i=0; i<c; i++){
    for(j=0; j<d; j++){
    z[i][j]= x[i][j]+y[i][j];
        printf("%3d ", z[i][j]);
    }
    printf("\n");
    }
}
else{
    printf("\nFor matrix addition to be defined, the two matrices you are adding must have the same dimensions.\n\n");
}
return 0;
}
