/* 
Write a Program To Take a Sorted Array & an Integer As Inputs. 
The Elements In The Sorted Array Might Be Repeated. 
You Need To Print The First and Last Occurrence Of The Target And Print The Index Of First And Last Occurrence.
*/

#include <stdio.h>

void findFirstAndLastOccurrence(int arr[], int size, int target, int *first, int *last) 
{
    *first = -1;
    *last = -1;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            *first = i;
            break;
        }
    }

    for (int i = size - 1; i >= 0; i--) 
    {
        if (arr[i] == target) 
        {
            *last = i;
            break;
        }
    }
}

int main() 
{
    int size, target;

    printf("Please Enter The Size Of The Sorted Array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Please Enter %d Elements In The Sorted Array :\n", size);

    for (int i = 0; i < size; i++) 
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Please Enter The Target Integer : ");
    scanf("%d", &target);
    
    int first, last;
    findFirstAndLastOccurrence(arr, size, target, &first, &last);
    
    if (first == -1 && last == -1) 
    {
        printf("The Target %d Is Not Present In The Array", target);
    } 
    else 
    {
        printf("First and Last Occurrence (Index) Of %d Is : (%d, %d)", target, first, last);
    }
    
    return 0;
}