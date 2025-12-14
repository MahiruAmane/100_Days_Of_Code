/*
Write a Program To Take An Integer Array As Input. 
The Task Is To Find The Maximum Sum Of Any Contiguous Sub Array Using Kadane's Algorithm. 
Print The Maximum Sum As Output. 
If All Elements Are Negative, Print The Largest (Least Negative) Element.
*/

#include <stdio.h>

int main()
{
    int size, k;

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

    int max_so_far = arr[0];
    int max_ending_here = 0;

    for (int i = 0; i < size; i++) 
    {
        max_ending_here = max_ending_here + arr[i];

        if (max_so_far < max_ending_here) 
        {
            max_so_far = max_ending_here;
        }

        if (max_ending_here < 0) 
        {
            max_ending_here = 0;
        }
    }

    printf("The Maximum Sum Of Contiguous Sub Array Is : %d", max_so_far);

    return 0;
}