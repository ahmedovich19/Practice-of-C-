// C++ implementation of the Sentinel Linear Search algorithm
#include <iostream>
using namespace std;

// Function to search x in the given array
void sentinelSearch(int arr[], int n, int key)
{

	// Last element of the array
	int last = arr[n - 1];

	// Element to be searched is
	// placed at the last index
	arr[n - 1] = key;
	int i = 0;

	while (arr[i] != key)
		i++;

	// Put the last element back
	arr[n - 1] = last;

	if ((i < n - 1) || (arr[n - 1] == key))
		cout << key << " is present at index " << i;
	else
		cout << "Element Not found";
}

// Driver code
int main()
{   int num;
    cout << "Type array size: ";
    cin >> num;
    int arr[num];
    cout << "\nType the Array elements:\n";
    for(int i=0;i<num;i++){
        cin >> arr[i];
    }
	int key;
	cout << "\nType the value you want to search: ";
    cin >>key;
	sentinelSearch(arr, num, key);

	return 0;
}
