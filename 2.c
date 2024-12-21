#include<stdio.h>
int main(){
    int age;
    printf("enter a person age :");
    scanf("%d",&age);
    if (age >18){
        printf("Voter.\n");
    }else {
        printf("Not Voter.\n");
    }
    return 0;
}