#include<stdio.h>
int main(){
    int age;
    printf("enter a person age:");
    scanf("%d",&age);
    if(13<=age&&age<=19){
        printf("Teenagers.\n");
    }else {
        printf("Not Teenagers.\n");
    }
    return 0;
}