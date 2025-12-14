/*
Write a Program To Take An Integer Array Which Contains Only Positive Integers & An Integer Target As Inputs. 
The Goal Is To Find Two Distinct Indices i & j In The Array Such That nums[i] + nums[j] Equals The Target. 
Assume Exactly One Solution Exists & Return The Indices In Any Order. 
Print The Two Indices Separated By A Space As Output. 
If No Solution Exists Print "(-1, -1)".
*/

#include <stdio.h>

void findTwoSum(int arr[], int size, int target) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] + arr[j] == target) 
            {
                printf("(%d, %d)", i, j);
                return;
            }
        }
    }
    printf("(-1, -1)");
}

int main() 
{
    int size, target;

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

    printf("Please Enter The Target Value : ");
    scanf("%d", &target);

    findTwoSum(arr, size, target);

    return 0;
}