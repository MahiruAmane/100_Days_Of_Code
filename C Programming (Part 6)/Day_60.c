/* 
Write a Program To Take An Integer Array & An Integer K As Input. 
The Task Is To Find The Maximum Element In Each Subarray Of Size K Moving From Left To Right. 
Print The Maximum Elements For Each Window Separated By Spaces As Output.
*/

#include <stdio.h>

void findMaxInSubarrays(int arr[], int n, int k) 
{
    for (int i = 0; i <= n - k; i++) 
    {
        int max = arr[i];
        for (int j = 1; j < k; j++) 
        {
            if (arr[i + j] > max) 
            {
                max = arr[i + j];
            }
        }
        printf("%d ", max);
    }
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

    printf("The Maximum Elements In Each Subarray Of Size %d Are : ", k);

    findMaxInSubarrays(arr, size, k);

    return 0;
}