/* 
Write a Program To Take Two Sorted Arrays As Input. 
Merge Both The Arrays Such That The Merged Array Is Also Sorted. 
Print The Merged Array.
*/

#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) 
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) 
    {
        if (arr1[i] < arr2[j]) 
        {
            mergedArr[k++] = arr1[i++];
        } 
        else 
        {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < size1) 
    {
        mergedArr[k++] = arr1[i++];
    }

    while (j < size2) 
    {
        mergedArr[k++] = arr2[j++];
    }
}

int main()
{
    int size1, size2;

    printf("Please Enter The Size Of The First Sorted Array : ");
    scanf("%d", &size1);

    int arr1[size1];

    printf("Please Enter The Elements Of The First Sorted Array : \n");

    for (int i = 0; i < size1; i++) 
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Please Enter The Size Of The Second Sorted Array : ");
    scanf("%d", &size2);

    int arr2[size2];

    printf("Please Enter The Elements Of The Second Sorted Array : \n");

    for (int i = 0; i < size2; i++) 
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    mergeSortedArrays(arr1, size1, arr2, size2, mergedArr);

    printf("The Merged Sorted Array Is As Follows : \n");

    for (int i = 0; i < mergedSize; i++) 
    {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}