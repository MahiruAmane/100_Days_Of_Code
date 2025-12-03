// Write a Program To Insert An Element In a Sorted Array At The Appropriate Position.

#include <stdio.h>

int main()
{
    int n1;

    printf("Please Enter The Number Of Elements You Want In The Sorted Array : ");
    scanf("%d", &n1);

    int arr1[n1 + 1];

    printf("Please Enter The Elements Of The Sorted Array : \n");
    for (int i = 0; i < n1; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    int element;
    printf("Please Enter The Element You Want To Insert In The Sorted Array : ");
    scanf("%d", &element);

    arr1[n1] = element;

    for (int i = 0; i < n1 + 1; i++)
    {
        for (int j = i + 1; j < n1 + 1; j++)
        {
            if (arr1[i] > arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    printf("The New Sorted Array Is : ");
    for (int i = 0; i < n1 + 1; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}