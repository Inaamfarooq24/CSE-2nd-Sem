#include<stdio.h>
void factors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
         printf("Factors of %d are: %d\n",n,i);
        }
    }
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    factors(a);
    return 0;
}