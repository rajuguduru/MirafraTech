#include <stdio.h>
int removeDuplicates(int arr[], int n)
{
	if (n == 0 || n == 1)
		return n;

	int temp[n];
	int j = 0;

	for (int i = 0; i < n - 1; i++) {
		if (arr[i] != arr[i + 1])
			temp[j++] = arr[i];
	}

	temp[j++] = arr[n - 1];

	for (int i = 0; i < j; i++)
		arr[i] = temp[i];

	return j;
}
/*int main()
{
	int n,i,j=0;
	printf("enter the no.of elements\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}

	n=removeDuplicates(a,n);
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}*/
int main()
{
    int arr[100];
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
