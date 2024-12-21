#include<stdio.h>
int main(){
    int n,age;
    printf("enter number of persons:");
    scanf("%d",&n);
    int child = 0 , teenager = 0 , seniorcitizen = 0;
    for (int i = 0; i<n;i++){
        printf("enter %d age:",i+1);
        scanf("%d",&age);
        if(age<=12){
            child++;
        }else if(age>=13&&age<=19){
            teenager++;
        }else if(age>=65){
            seniorcitizen++;
        }
    }
    printf("Child:%d",child);
    printf("Teenager:%d",teenager);
    printf("Senior Citizen:%d",seniorcitizen);
    return 0;
}