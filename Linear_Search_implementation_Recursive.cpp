#include <iostream>
using namespace std;


int linearSearch(int arr[],int size,int key){
	if (size ==0){
    	return -1;
    }else if(arr[size-1]==key){
    	return size-1;
    }else{
    	int ans = linearSearch(arr,size-1,key);
        return ans;
    }
}
int main()
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
	int result = linearSearch(arr, N, x);
	(result == -1)
		? cout << "\nElement is not present in array"
		: cout << "\nElement is present at index " << result;
	return 0;
}
