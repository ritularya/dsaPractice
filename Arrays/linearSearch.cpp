#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;


int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    //taking num of elements in array from user
    cout<<"Size of the array: ";
    int n;
    cin>>n;

    //Value of elements in the array
    cout<<"Elements of the array: ";
    vector<int> arr= {};
    int p;
    for(int i=0; i<n;i++){
        cin>>p;
        arr.push_back(p);
    }

    //Number to be found
    cout<<"Number to be found: ";
    int num;
    cin>>num;

    cout<<"The number was found first at index: "<<linearSearch(n, num, arr);

}
