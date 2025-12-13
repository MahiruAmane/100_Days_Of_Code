/*
Write a Program To Take an Array Of Integers As Input, Calculate The Pivot Index Of This Array. 
The Pivot Index Is The Index Where The Sum Of All The Numbers Strictly To The Left Of The Index Is Equal To The Sum Of All The Numbers Strictly To The Index's Right. 
If The Index Is On The Left Edge Of The Array, Then The Left Sum Is 0 Because There Are No Elements To The Left, This Also Applies To The Right Edge Of The Array. 
Print The Leftmost Pivot Index, If No Such Index Exists Return Appropriate Message.
*/

#include <stdio.h>

int findPivotIndex(int arr[], int size) 
{
    int totalSum = 0;
    
    for (int i = 0; i < size; i++) 
    {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < size; i++) 
    {
        totalSum -= arr[i];

        if (leftSum == totalSum) 
        {
            return i; 
        }

        leftSum += arr[i];
    }

    return -1; 
}

int main() 
{
    int size;

    printf("Please Enter The Size Of The Array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Please Enter %d Elements In The Array :\n", size);

    for (int i = 0; i < size; i++) 
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, size);
    printf("Pivot Index Is : %d\n", pivotIndex);

    return 0;
}