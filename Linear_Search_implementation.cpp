// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver code
int main(void)
{
    int N;
    int x;
    cout <<"Type The value you want to research: ";
	cin>>x;
    cout <<"\nType The Array Size: ";
	cin>>N;
	int arr[N];
	cout <<"\nType The Array elements: \n";
	for (int i=0;i<N;i++){
        cin>>arr[i];
	}
	cout <<"\nThe Array elements are: \n";
	for (int i=0;i<N;i++){
        cout << arr[i] <<" ";
	}
	// Function call
	int result = search(arr, N, x);
	(result == -1)
		? cout << "\nElement is not present in array"
		: cout << "\nElement is present at index " << result;
	return 0;
}
