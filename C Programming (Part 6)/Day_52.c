/*
Write a Program To Take a Sorted Array & An Integer As Input.
Find The Index Of The Smallest Element In The Array That Is Greater Than Or Equal To The Integer and Print It.
*/

#include <stdio.h>

int findIndex(int arr[], int size, int target) 
{
    int left = 0, right = size - 1;
    int result = -1; 

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= target) 
        {
            result = mid; 
            right = mid - 1;
        } 
        else 
        {
            left = mid + 1; 
        }
    }

    return result;
}

int main() 
{
    int size, target;

    printf("Please Enter The Size Of The Sorted Array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Please Enter %d Elements In The Sorted Array :\n", size);

    for (int i = 0; i < size; i++) 
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Please Enter The Target Integer : ");
    scanf("%d", &target);

    int index = findIndex(arr, size, target);

    if (index != -1) 
    {
        printf("The Index Of The Smallest Element >= %d Is : %d", target, index);
    } 
    else 
    {
        printf("No Element In The Array Is Greater Than Or Equal To %d", target);
    }

    return 0;
}