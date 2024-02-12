#include <stdio.h>
int main() 
{
    int n, i, arr[50],max;

    printf("Enter the size of array:");
    scanf("%d", &n);

    printf("Enter the elements into array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max=arr[0];


    printf("The Elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n; i++) {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nMaximum element: %d",max);
    return 0;
}