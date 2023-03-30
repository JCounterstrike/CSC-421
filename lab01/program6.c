/*
 * This C Program takes an arbitrary (but less than 100) number of integer values (between 0 and 99) from the user, stores them in an array and prints the values in sorted order.
 */
#include <stdio.h>  
 
/*  Sort function  */
void numsort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

}

/*  End of sort()  */
 
/*  The main() begins  */
int main()
{
    int n, k = 0, Array[100], i;
    printf("How many values to sort (<100)? ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        printf("\nEnter a number: ");
        if (scanf("%d", &Array[i]) != 1) {
           printf("Error: Invalid input\n");
        exit(1);
        }

    }
    
    numsort(Array, n);
    printf("\n");
    return 0;
}
