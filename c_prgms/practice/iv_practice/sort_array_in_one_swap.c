#include <stdio.h>

void sortArray(int arr[], int n)
{
 
    int x = -1, y = -1;
    int prev = arr[0];
 
    for (int i = 1; i < n; i++)
    {
        // If the previous element is greater than the current element
        if (prev > arr[i])
        {
            // First occurrence of conflict
            if (x == -1) {
                x = i - 1, y = i;
            }
            else {
                // Second occurrence of conflict
                y = i;
            }
        }
        prev = arr[i];
    }
 
    // Swap the elements at index `x` and `y`
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
 
int main()
{
    int arr[] = { 3, 5, 6, 9, 8, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sortArray(arr, n);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}

