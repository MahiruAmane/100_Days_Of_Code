// Write a Program To Insert An Element In An Array At a Given Position.

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

    int position;
    printf("Please Enter The Position At Which You Want To Insert The Element (1 to %d) : ", n1);
    scanf("%d", &position);

    if (position < 1 || position > n1 + 1)
    {
        printf("Invalid Position!\n");
        return 1;
    }

    for (int i = n1; i >= position; i--)
    {
        arr1[i] = arr1[i - 1];
    }

    arr1[position - 1] = element;
    
    printf("The New Array Is : ");
    for (int i = 0; i < n1 + 1; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}