/*
Write a Program To Take a Positive Integer N As Input & Find The Pivot Integer X Such That The Sum Of All Elements Between 1 and X Inclusively Equals The Sum Of All Elements Between X & N Inclusively. 
Print The Pivot Integer X, If No Such Integer Exists Print Appropriate Message.
*/

#include <stdio.h>

int findPivotInteger(int n) 
{
    int totalSum = n * (n + 1) / 2; 

    int leftSum = 0;

    for (int x = 1; x <= n; x++) 
    {
        leftSum += x;
        int rightSum = totalSum - leftSum + x;
        
        if (leftSum == rightSum) 
        {
            return x;
        }
    }

    return -1; 
}

int main() 
{
    int n;

    printf("Please Enter A Positive Integer : ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Please Enter A Valid Positive Integer");
        return 1;
    }

    int pivotInteger = findPivotInteger(n);
    
    if (pivotInteger != -1) 
    {
        printf("Pivot Integer Is : %d", pivotInteger);
    } 
    else 
    {
        printf("No Pivot Integer Exists");
    }

    return 0;
}