//THIS IS THE OPTIMAL SOLUTION

#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    
    int p=arr.size();
    
    //End if empty array
    if (p==0) return arr;
    
    //simplify the value of d
    k=k%p;

    //if k =0, no rotation.
    if(k==0) return arr;
    
    //reverse the initial set
    reverse(arr.begin(), arr.begin()+k);
    
    //reverse the set of elements in the end
    reverse(arr.begin()+k, arr.end());

    //reverse the entire array
    reverse(arr.begin(), arr.end());
    
    return arr;
}


int main(){

    //taking the array size fromt the user
    cout<<"Number of elements in array: ";
    int n;
    cin>>n;

    //taking values of elements in the array
    cout<<"Enter the elements of the array: ";
    vector<int> arr={};    
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }

    //Takking value of K
    cout<<"Rotate given array by: ";
    int k;
    cin>>k;

    //Printing the rotated array
    vector<int> result = rotateArray(arr, k);
    
    cout <<"The rotated array is: ";
    for (const auto& element : result) {
        cout << element << " ";
    }    

    return 0;

}
