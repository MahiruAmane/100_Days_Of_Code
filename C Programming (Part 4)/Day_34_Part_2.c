// Write a Program To Delete An Element From An Array.

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

    printf("Please Enter The Number You Want To Delete : ");
    scanf("%d", &number);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            found = 1;
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }

    if (!found)
    {
        printf("Element Not Found In The Array\n");
    }
    else
    {
        printf("The New Array Is : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}