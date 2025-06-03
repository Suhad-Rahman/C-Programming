#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
    int id;
    char name[102];
    float cgpa;
}a;

int main(){
    printf("\nEnter Student ID: ");
    scanf("%d", &a.id);
    getchar();
    printf("\nEnter Name: ");
    fgets(a.name, 102, stdin);
    a.name[strlen(a.name)-1]='\0';
    printf("\nEnter obtained CGPA: ");
    scanf("%f", &a.cgpa);
    
    printf("\n\nStudent Information--->\n");
    printf("Student ID: %d\n", a.id);
    printf("Student Name: %s\n", a.name);
    printf("Obtained CGPA: %.2f\n", a.cgpa);
    
    
    return 0;
}