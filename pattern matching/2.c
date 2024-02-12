#include<stdio.h>
int main(){
    int i,n=6,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}