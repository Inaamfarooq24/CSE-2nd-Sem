#include<stdio.h>
void factorial(int n){
   long long factorial=1;
   for(int i=1;i<=n;i++){
   factorial=factorial*i;
   }
   printf("Factorial of %d=%d",n,factorial);
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    factorial(a);
    return 0;
}