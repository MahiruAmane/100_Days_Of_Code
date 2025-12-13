/*
Write a Program To Take An Integer Array arr & An Integer K As Inputs. 
The Task Is To Find The First Negative Integer In Each Subarray Of Size K Moving From Left To Right. 
If No Negative Exists In A Window, Print "0" For That Window.
Print The Results Separated By Spaces As Output.
*/

#include <stdio.h>

void firstNegativeInWindow(int arr[], int n, int k) 
{
    for (int i = 0; i <= n - k; i++) 
    {
        int found = 0;

        for (int j = 0; j < k; j++) 
        {
            if (arr[i + j] < 0) 
            {
                printf("%d ", arr[i + j]);
                found = 1;
                break;
            }
        }
        if (!found) 
        {
            printf("0 ");
        }
    }
    printf("\n");
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

    printf("The First Negative Integer In Each Sub-Array Of Size %d Is : ", k);

    firstNegativeInWindow(arr, size, k);

    return 0;

}