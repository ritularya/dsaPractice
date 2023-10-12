#include <iostream>
#include<climits>
#include<vector>
using namespace std;


vector<int> rotateArray(vector<int>& arr, int n) {
    int temp= arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}

int main(){

    //getting no. of elements from user
    cout<<"Enter the number of elements in the array: ";
    int n;
    cin>>n;

    //getting elements of array from user
    vector<int> arr = {};
    int p;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>p;
        arr.push_back(p);
    }

    //Printing the rotated array
    vector<int> result = rotateArray(arr, n);
    cout <<"The rotated array is: ";
    
    for (const auto& element : result) {
        cout << element << " ";
    }    

    return 0;
}

