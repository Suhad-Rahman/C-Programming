#include<stdio.h>
int main(){
int num, low, high, op, org,clone, dig, rem, power, result, count=0;


printf("\nEnter low= ");
scanf("%d", &low);

printf("\nEnter high= ");
scanf("%d", &high);


for(num=low; num<=high; num++){

org=num;
clone=num;
dig=0;

while(clone!=0){

    clone=clone/10;
    ++dig;
}

clone=num;
result=0;
while(clone!=0){

    power=1;


    rem=clone%10;
        for(int i=1; i<=dig; i++){

            power*=rem;

        }

    result+=power;
    clone/=10;
}

if(result==org){

    printf("\n%d is an Armstrong Number!\n", org);
    count++;
}

}
printf("Total armstrong number in the given range is = %d" , count);
return 0;
}
