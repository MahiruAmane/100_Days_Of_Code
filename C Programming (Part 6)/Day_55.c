/*
Write a Program To Take An Integer Array Of Size N & Print The Majority Element. 
The Majority Element Is The Element That Appears Strictly More Than N/2 Times. 
Print Appropriate Message If No Such Element Exists.
*/

#include <stdio.h>

int findMajorityElement(int arr[], int n) 
{
    int count = 0, candidate = -1;

    for (int i = 0; i < n; i++) 
    {
        if (count == 0) 
        {
            candidate = arr[i];
            count = 1;
        } 
        else if (arr[i] == candidate) 
        {
            count++;
        } 
        else
        {    
            count--;
        }
    }

    count = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == candidate) 
        {
            count++;
        }
    }

    if (count > n / 2) 
    {
        return candidate;
    } 
    else 
    {
        return -1;
    }
}

int main() {

    int size;

    printf("Please Enter The Size Of The Array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Please Enter %d Elements In The Array :\n", size);

    for (int i = 0; i < size; i++) 
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int majorityElement = findMajorityElement(arr, size);

    if (majorityElement != -1) 
    {
        printf("The Majority Element Is : %d", majorityElement);
    } 
    else 
    {
        printf("No Majority Element Exists");
    }

    return 0;

}