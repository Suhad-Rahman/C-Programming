#include<stdio.h>
int main(){
int height, width, row, col;
printf("Enter Height= ");
scanf("%d", &height);

printf("Enter Width= ");
scanf("%d", &width);

for(row=1; row<=height; row++){

    for(col=1; col<=width; col++){
        if(row==1 || row==height || col==1 || col==width){
        printf("* ");
        }
            else{
        printf("  ");
    }
    }

    printf("\n");

}



return 0;
}
