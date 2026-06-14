#include<stdio.h>
void divisibility(int n){
    if(n%5==0){
        printf("The number is divisible by 5");
    }
    else{
        printf("The number is not divisible by 5");
    }
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    divisibility(a);
    return 0;
}