// Write a Program To Take An Integer Array & An Integer As Inputs. Print The Maximum Sum Of All The Sub-Arrays Of Size K.

#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) 
{
    int maxSum = 0, windowSum = 0;

    for (int i = 0; i < k; i++) 
    {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    for (int i = k; i < n; i++) 
    {
        windowSum += arr[i] - arr[i - k];
        
        if (windowSum > maxSum) 
        {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main() 
{
    int size, k;

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

    printf("Please Enter The Size Of The Sub-Array : ");
    scanf("%d", &k);

    if (k > size || k <= 0) 
    {
        printf("Invalid Sub-Array Size");
        return 1;
    }

    int maxSum = maxSumSubarray(arr, size, k);
    printf("The Maximum Sum Of All The Sub-Arrays Of Size %d Is : %d\n", k, maxSum);

    return 0;
}