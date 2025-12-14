/*
Write a Program To Take An Integer Array As Input. 
Only One Element Will Be Repeated. 
Print The Repeated Element. 
Try To Find The Result In One Single Iteration.
*/

#include <stdio.h>

int main() 
{
    int n, i, repeatedElement;

    printf("Please Enter The Size Of The Array : ");
    scanf("%d", &n);

    int arr[n];
    int hashTable[1000] = {0};

    printf("Please Enter The Elements Of The Array : \n");

    for (i = 0; i < n; i++) 
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
        hashTable[arr[i]]++;

        if (hashTable[arr[i]] == 2) 
        {
            repeatedElement = arr[i];
        }
    }

    printf("The Repeated Element Is : %d\n", repeatedElement);

    return 0;
}