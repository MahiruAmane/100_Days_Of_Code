/*
Write a Program To Take an Array Of Integers As Input, The Task Is To Find The Previous Greater Element For Each Element Of The Array In Order Of Their Appearance In The Array. 
Previous Greater Element Of an Element In The Array Is The Nearest Element On The Left Which Is Greater Than The Current Element. 
If There Does Not Exist Next Greater Of Current Element, Then Previous Greater Element For Current Element Is -1.
*/

#include <stdio.h>

void previous_greater_element(int arr[], int n, int result[]) 
{
    for (int i = 0; i < n; i++) 
    {
        result[i] = -1;

        for (int j = i - 1; j >= 0; j--) 
        {
            if (arr[j] > arr[i]) 
            {
                result[i] = arr[j];
                break;
            }
        }
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

    previous_greater_element(arr, size, result);

    printf("Previous Greater Elements Are As Follows :\n");

    for (int i = 0; i < size; i++) 
    {
        printf("Element %d (%d) - Previous Greater Element Is : %d\n", i + 1, arr[i], result[i]);
    }
    
    return 0;
}