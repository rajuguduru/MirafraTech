#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Error: Failed to allocate memory.\n");
        exit(1);
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("The sum of the %d elements is %d\n", n, sum);

    free(ptr);

    return 0;
}

