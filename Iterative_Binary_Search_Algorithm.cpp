// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// It returns location of x in given array arr[l..r] if present,otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    while (l<=r){
    	int m = l+(r-l)/2;
        if (arr[m]==x)
        	return m;

        else if (arr[m]<x)
        	l = m +1;

        else
        	r =m-1;

    }

	// if we reach here, then element was
	// not present
	return -1;
}

int main(void)
{
    int x;
	cout <<"\nType the value you want to search: \n";
	cin >> x;
	int num;
	cout <<"Type the array size: ";
	cin >> num;
	int arr[num];
	cout <<"\nType the array elements:\n";
	for (int i=0;i<num;i++){
        cin >> arr[i];
	}
	int result = binarySearch(arr, 0, num - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
