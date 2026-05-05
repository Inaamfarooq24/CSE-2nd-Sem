#include<stdio.h>
int main(){
    int a,i,j,k;
    printf("Enter the number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(k=1;k<=a-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
         printf("\n");
    }
        return 0;
}
