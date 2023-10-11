#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//BRUTE FORCE

//WE'LL FIRST SORT THE GIVEN ARRAY
int sortArr(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}


int main() {
    vector<int> arr = {};
    int n;

    //taking array as user input
    cout<<"Enter the size of the array: ";
    cin>>n;

    int a;
    
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++){
        cout<<"Index "<<i<<": ";
        cin>>a;
        arr.push_back(a);
    }

    cout<<"The largest element in the given array is: "<<sortArr(arr)<<endl;

    return 0;

}
