// A simple C program to rearrange contents of arr[]
// such that arr[j] becomes j if arr[i] is j
#include <stdio.h>

// A simple method to rearrange 'arr[0..n-1]' so that 'arr[j]'
// becomes 'i' if 'arr[i]' is 'j'
void rearrangeNaive(int arr[], int n)
{
	// Create an auxiliary array of same size
	int temp[n], i;

	// Store result in temp[]
	for (i = 0; i < n; i++)
		temp[arr[i]] = i;

	// Copy temp back to arr[]
	for (i = 0; i < n; i++)
		arr[i] = temp[i];
}

// A utility function to print contents of arr[0..n-1]
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
	// int arr[] = { 3, 2, 0, 1};
	// printf("Given array is \n");
	// printArray(arr, n);

	rearrangeNaive(arr, n);

	// printf("Modified array is \n");
	printArray(arr, n);
	return 0;
}
