// Iterative C++ program to reverse an array and string
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void print_Array_and_reversed(int arr[], int starto, int endo)
{
    cout << "The Array numbers are: " << endl;
	for (int i = starto; i <= endo; i++)
		cout << arr[i] << " ";
    cout << "\nThe Reversed array numbers are: " << endl;
	for (int i = endo; i>=starto;i--)
    	cout << arr[i]<<" ";
}
void print_string_and_reversed(string stringo, int string_len){
    cout << "\nstring is: " << endl;
	for (int i=0;i<=string_len;i++){
    	cout << stringo[i];
    }
    cout << "\nReversed string is:" << endl;
    for (int i =string_len;i>=0;i--){
    	cout <<stringo[i];
    }
}

/* Driver function to test above functions */
int main()
{
    cout <<"Type array size: ";
    int arr_num;
    cin >> arr_num;
	int arr[arr_num];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "\nType "<< arr_num<<" numbers for the array: \n";
	for(int i = 0; i < n; i++){
        cin>>arr[i];
        cout << endl;
    }

    string stringo;
    cout << "\nType a string: ";
    cin >> stringo;
    int string_len = stringo.length();
	// To print original array and its reversed
	print_Array_and_reversed(arr,0, n-1);
    // To print original string and its reversed
    print_string_and_reversed(stringo, string_len-1);

	return 0;
}
