#include<stdio.h>
int main(){
    int i,j,n=7;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=0;j<n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
