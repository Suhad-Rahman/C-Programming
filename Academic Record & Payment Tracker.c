#include<stdio.h>
#include<string.h>

typedef struct student{
    long long int id;
    char name[102];
    float cgpa;
    double payment_status;
}st;

int main(){
    int i, n;
    
    printf("Enter Student Count= ");
    scanf("%d", &n);
    
    st a[n];
    getchar();
    for(i=0; i<n; i++){
        printf("\nInput Information for Student %d\n- - - - - - - - - - - - - - - - - - - - \n", i+1);
        printf("Enter Student Name: ");
        fgets(a[i].name, 102, stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        
        printf("Enter Student ID: ");
        scanf("%lld", &a[i].id);
        
        printf("Enter cgpa: ");
        scanf("%f", &a[i].cgpa);
        
        printf("Paid Amount= ");
        scanf("%lf", &a[i].payment_status);
        getchar();
    }
    
    for(i=0; i<n; i++){
        long long int payment= 26475;
        printf("\n\nDisplaying information for Student %d\n- - - - - - - - - - - - - - - -\n", i+1);
        
        printf("\nStudent Name: %s\n", a[i].name);
        printf("Student ID: %lld\n", a[i].id);
        printf("Obtained CGPA: %.2f\n", a[i].cgpa);
        if(a[i].payment_status<26475){
            printf("Payment Status: Unpaid!\nPlease Pay= %.2lf", (double)payment-a[i].payment_status);
        }
        else{
            printf("Payment Status: Paid!\nBalance= %.2lf", a[i].payment_status-(double)payment);
        }

    }
    
    
    
    return 0;
}