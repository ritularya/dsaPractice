#include <bits/stdc++.h> 
#include<vector>
#include<iostream>
using namespace std;

vector<int> reverseArray(vector<int> &arr , int m)
{
    int n = arr.size();
	int start = m+1; //we need to reverse after the index the user inputs
    int end = n-1;//n is size of the array. the end element is n-1 if index starts from 0

        while(start<end){
            swap(arr[start], arr[end]);
            end--;
            start++;
    
        }
    return arr;
}

int main(){

    //taking the array size from the user
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
    cout<<"Reversal after index: ";
    int m;
    cin>>m;

    //Printing the rotated array
    vector<int> result = reverseArray(arr, m);
    
    cout <<"The reversed array is: ";
    for (const auto& element : result) {
        cout << element << " ";
    }    

    return 0;

}
