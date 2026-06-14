#include<stdio.h>
void sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum of %d numbers=%d",n,sum);
}
int main(){
    int a;
    printf("Enter the number of terms:");
    scanf("%d",&a);
    sum(a);
    return 0;
}