/*Given an array of integers, task is to print the array in the order – smallest number, Largest number, 2nd smallest number, 2nd largest number, 3rd smallest number, 3rd largest number and so on…..
Examples: 
 

Input : arr[] = [5, 8, 1, 4, 2, 9, 3, 7, 6]
Output :arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5}

Input : arr[] = [1, 2, 3, 4]
Output :arr[] = {1, 4, 2, 3}*/

// C++ program to print the array in given order
#include <bits/stdc++.h>
using namespace std;

// Function which arrange the array.
void rearrangeArray(int arr[], int n)
{
	// Sorting the array elements
	sort(arr, arr + n);

	int tempArr[n]; // To store modified array

	// Adding numbers from sorted array to
	// new array accordingly
	int ArrIndex = 0;

	// Traverse from begin and end simultaneously
	for (int i = 0, j = n-1; i <= n / 2 ||
					j > n / 2; i++, j--) {
		tempArr[ArrIndex] = arr[i];
		ArrIndex++;
		tempArr[ArrIndex] = arr[j];
		ArrIndex++;
	}

	// Modifying original array
	for (int i = 0; i < n; i++)
		arr[i] = tempArr[i];
}

// Driver Code
int main()
{
	int arr[] = { 5, 8, 1, 4, 2, 9, 3, 7, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	rearrangeArray(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
