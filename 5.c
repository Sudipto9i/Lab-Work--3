#include<stdio.h>
int main(){
    int n , count = 0;
    float cgpa;
    printf("enter number of students:");
    scanf("%d",&n);
    for(int i = 0 ; i <n ;i++){
        printf("enter %d students cgpa:",i+1);
        scanf("%f",&cgpa);
        if(cgpa>=3.5){
            count++;
        }
    }
    printf("number of st secured at least 3.5 cgpa: %d\n",count);
    return 0;
}