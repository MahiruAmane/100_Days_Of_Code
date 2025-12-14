/*
Write a Program To Take An Integer Array & An Integer As Inputs. 
The Task Is To Find the Smallest Element In The Array. 
Print The Smallest Element as Output.
*/

#include <stdio.h>

int main() 
{
    int size;
    int smallest;

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

    smallest = arr[0];

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }

    printf("The Smallest Element In The Array Is : %d", smallest);

    return 0;
}