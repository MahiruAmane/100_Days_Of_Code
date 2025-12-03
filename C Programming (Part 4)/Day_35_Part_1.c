// Write a Program To Find The Second Largest Element In An Array.

#include <stdio.h>

int main()
{
    int n1;

    printf("Please Enter The Number Of Elements You Want In The Array : ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Please Enter The Elements Of The Sorted Array : \n");
    for (int i = 0; i < n1; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = i + 1; j < n1; j++)
        {
            if (arr1[i] > arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    printf("The Second Largest Element In The Given Array Is : %d\n", arr1[n1 - 2]);

    return 0;
}