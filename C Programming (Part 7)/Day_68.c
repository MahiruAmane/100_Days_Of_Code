/*
Write a Program To Take An Array As Input. 
The Array Should Contain All The Integers Between 0 To N Except For One. 
Print That Missing Number.
*/

#include <stdio.h>

int main() 
{
    int size;

    printf("Please Enter The Size Of The Array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Please Enter The Elements Of The Array : \n");

    for (int i = 0; i < size; i++) 
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int expected_sum = (size * (size + 1)) / 2;
    int actual_sum = 0;

    for (int i = 0; i < size; i++) 
    {
        actual_sum += arr[i];
    }

    int missing_number = expected_sum - actual_sum;

    printf("The Missing Number Is : %d\n", missing_number);

    return 0;
}