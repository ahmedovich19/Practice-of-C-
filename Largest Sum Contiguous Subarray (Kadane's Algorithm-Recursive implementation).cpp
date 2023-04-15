#include <climits>
#include <iostream>

using namespace std;

int maxSubArraySum(int arr[], int n)
{
	// Base case: when there is only one element in the
	// array
	if (n == 1) {
		return arr[0];
	}
	// Recursive case: divide the problem into smaller
	// sub-problems
	int m = n / 2;
	// Find the maximum subarray sum in the left half
	int left_max = maxSubArraySum(arr, m);
	// Find the maximum subarray sum in the right half
	int right_max = maxSubArraySum(arr + m, n - m);
	// Find the maximum subarray sum that crosses the middle
	// element
	int left_sum = INT_MIN, right_sum = INT_MIN, sum = 0;
	for (int i = m; i < n; i++) {
		sum += arr[i];
		right_sum = max(right_sum, sum);
	}
	sum = 0;
	for (int i = m - 1; i >= 0; i--) {
		sum += arr[i];
		left_sum = max(left_sum, sum);
	}
	int cross_max = left_sum + right_sum;
	// Return the maximum of the three subarray sums
	return max(cross_max, max(left_max, right_max));
}

int main()
{
	cout <<"Type array size: ";
    int arr_num;
    cin >> arr_num;
	int arr[arr_num];
	cout << "\nType "<< arr_num<<" numbers for the array: \n";
	for(int i = 0; i < arr_num; i++){
        cin>>arr[i];
        cout << endl;
    }
	int max_sum = maxSubArraySum(arr, arr_num);
	cout << "Maximum contiguous sum is " << max_sum << endl;
	return 0;
}
