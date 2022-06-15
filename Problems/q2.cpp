// CPP program to split array and move first
// part to end.
/*There is a given array and split it from a specified position, and move the first part of the array add to the end. 
Input : arr[] = {12, 10, 5, 6, 52, 36}
            k = 2
Output : arr[] = {5, 6, 52, 36, 12, 10}
Explanation : Split from index 2 and first 
part {12, 10} add to the end .
*/
#include <stdio.h>

void splitArr(int arr[], int n, int k)
{
	for (int i = 0; i < k; i++) {

		// Rotate array by 1.
		int x = arr[0];
		for (int j = 0; j < n - 1; ++j)
			arr[j] = arr[j + 1];
		arr[n - 1] = x;
	}
}

// Driver code
int main()
{
	int arr[] = { 12, 10, 5, 6, 52, 36 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int position = 2;

	splitArr(arr, n, position);

	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);

	return 0;
}
