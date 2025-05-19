#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
while(1){
int n;
printf("\n\nEnter 1 to Use Linear Search.");
printf("\nEnter 2 to Use Bubble Sort.");
printf("\nEnter 3 to Exit!");
printf("\n\nEnter Operation= ");
scanf("%d", &n);
if(n==3){
    break;
}
switch(n){
    case 1:
        if(n==1){
srand(time(0));
int i,a;
int x[20];
printf("\nLinear Search!!\n");
for(i=0; i<20; i++){
    x[i]=rand()%51;
}
printf("\nThe Initial Array= ");
for(i=0; i<20; i++){
    printf("%d ", x[i]);
}
while(1){
        int count=0;
printf("\n\nSearch for >50 to Exit this operation.\n\nSearch (between 0 to 50) for= ");
scanf("%d",&a);
for(i=0;i<20; i++){
    if(x[i]==a){
        printf("\nThe element %d is Found at Position %d", a, i+1);
        count++;
    }
}
if (count>1){
    printf("\nThe element %d is Found %d times!!", a, count);
}
else if(count==1){
    printf("\nElement %d is found Once!", a);
}
else{
        printf("element %d is not found!", a);
            }
if(a>50){
    printf("\nGoing back to the Main Menu!!\n");
    break;
}
        }
            }
        break;
    case 2:
        if(n==2){
        printf("\n\nBubble Sort!");
        srand(time(0));
        int o[20], z, j, clone, flag;
        printf("\nThe Initial Array= ");
        for(z=0; z<20; z++){
            o[z]=rand()%51;
        }
        for(z=0; z<20; z++){
            printf(" %d ", o[z]);
        }
        for(z=0; z<20-1; z++){
            flag=0;
            for(j=0; j<20-z-1; j++){
                if(o[j]>o[j+1]){
                    clone=o[j];
                    o[j]=o[j+1];
                    o[j+1]=clone;
                    flag=1;
                }
            }
            if(flag==0){
                break;
            }
        }
        printf("\n\nThe Sorted Array= ");
        for(z=0;z<20;z++){
            printf(" %d ", o[z]);
        }
        break;
        }
    default:
        printf("\nEnter The Correct operation number!\n");
    }
}
return 0;
}
