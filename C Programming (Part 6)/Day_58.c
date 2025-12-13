/*
Write a Program To Take an Integer Array.
Print an Array Such That Each Element Is Equal To The Product Of All The Element Except The Current Element. 
The Product Of Any Prefix Or Suffix Of The Array Is Guaranteed To Fit In a 32 Bit Integer.
*/

#include <stdio.h>

void printProductArray(int arr[], int n) 
{
    int leftProd[n], rightProd[n], result[n];

    leftProd[0] = 1;
    rightProd[n - 1] = 1;
    
    for (int i = 1; i < n; i++) 
    {
        leftProd[i] = leftProd[i - 1] * arr[i - 1];
    }
    
    for (int i = n - 2; i >= 0; i--) 
    {
        rightProd[i] = rightProd[i + 1] * arr[i + 1];
    }
    
    for (int i = 0; i < n; i++) 
    {
        result[i] = leftProd[i] * rightProd[i];
    }
    
    printf("The Resultant Array Is As Follows :\n");

    for (int i = 0; i < n; i++) 
    {
        printf("Element %d : %d\n", i + 1, result[i]);
    }
}

int main() 
{
    int size;

    printf("Please Enter The Size Of The Array : ");
    scanf("%d", &size);
    
    int arr[size];
    int result[size];
    
    printf("Please Enter %d Elements In The Array :\n", size);

    for (int i = 0; i < size; i++) 
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printProductArray(arr, size);

    return 0;
}