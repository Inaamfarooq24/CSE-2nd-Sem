#include<stdio.h>
void positivenegative(int n){
    if(n >=0){
        printf("The number is positive");
    }
    else{
        printf("The number is negative");
    }
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    positivenegative(a);
    return 0;
}