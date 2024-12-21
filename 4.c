#include<stdio.h>
int main(){
    int n,population,count = 0;
    float area , density;
    printf("enter number of country:");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("enter %d countries population:",i+1);
        scanf("%d",&population);
        printf("enter %d countries area:",i+1);
        scanf("%f",&area);
        density = population/area;
    if(density>500){
        count++;
    }
    }
    printf("Countries that population more than 500: %d\n",count);
    return 0;
}