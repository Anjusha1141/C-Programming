#include<stdio.h>
int main(){
    int i,j,m,n,max=0,min=0;
    int arr[100][100];
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of cols:");
    scanf("%d",&n);
    printf("Enter the 2D array elements\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        
        }
    }
    printf("\nThe 2D array\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    max=arr[0][0];
    min=arr[0][0];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
        printf("\nThe Maximum element: %d ",max);
        printf("\nThe Minimum elements:%d",min);
    return 0;
}