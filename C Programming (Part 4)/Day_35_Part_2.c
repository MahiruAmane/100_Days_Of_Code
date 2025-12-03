// Write a Program To Rotate An Array To The Right By X Positions.

#include <stdio.h>

int main()
{
    int n;

    printf("Please Enter The Number Of Elements You Want In The Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Please Enter The Elements Of The Array : \n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Please Enter The Number Of Positions You Want To Rotate The Array To The Right : ");
    scanf("%d", &x);

    x = x % n;
    
    int rotated[n];
    for (int i = 0; i < n; i++)
    {
        rotated[(i + x) % n] = arr[i];
    }

    printf("The Rotated Array Is : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", rotated[i]);
    }

    return 0;
}