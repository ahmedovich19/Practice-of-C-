#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void largestSubarray(int arr[],int arr_size){
	int max_so_far = INT_MIN,max_ending_here = 0,s=0,start=0,end=0;
    for(int i=0;i<arr_size;i++){
        max_ending_here = max_ending_here+arr[i];
        if (max_ending_here > max_so_far){
        	max_so_far = max_ending_here;
            start =s;
            end=i;
            }
        if (max_ending_here < 0){
        	max_ending_here =0;
            s=i+1;
            }
    }
    cout << "Maximum contiguous sum is " << max_so_far
         << endl;
    cout << "Starting index " << start << endl
         << "Ending index " << end << endl;
}

int main(){

    cout <<"Type array size: ";
    int arr_num;
    cin >> arr_num;
	int arr[arr_num];
	cout << "\nType "<< arr_num<<" numbers for the array: \n";
	for(int i = 0; i < arr_num; i++){
        cin>>arr[i];
        cout << endl;
    }
    largestSubarray(arr,arr_num);
    return 0;
}
