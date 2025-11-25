// Write a Program To Search In a Sorted Array Using Binary Search.

#include <stdio.h>

int main()
{
    int n;
    int number;

    printf("Please Enter The Number Of Elements You Want In The Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Please Enter The Elements Of The Array : \n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Please Enter The Number You Want To Search : ");
    scanf("%d", &number);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The Sorted Array Is : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int left = 0;
    int right = n - 1;
    int found = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == number)
        {
            printf("The Number Was Found At Index %d", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < number)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("The Number Was Not Found In The Array");
    }

    return 0;
}