// C++ code to implement the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to rotate array
void rotate(int arr[], int d, int n)
{
	// Storing rotated version of array
	int temp[n];

	// Keeping track of the current index
	// of temp[]
	int j = 0;

	// Storing the n - d elements of
	// array arr[] to the front of temp[]
	for (int i = d; i < n; i++) {
		temp[j] = arr[i];
		j++;
	}

	// Storing the first d elements of array arr[]
	// into temp
	for (int i = 0; i < d; i++) {
		temp[j] = arr[i];
		j++;
	}

	// Copying the elements of temp[] in arr[]
	// to get the final rotated array
	for (int i = 0; i < n; i++) {
		arr[i] = temp[i];
	}
}

// Function to print elements of array
void printTheArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

// Driver's code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int d = 2;

	// Function calling
	rotate(arr, d, N);
	printTheArray(arr, N);

	return 0;
}
