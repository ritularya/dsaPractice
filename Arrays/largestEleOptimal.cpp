#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//OPTIMAL SOLUTION

//function to find largest element
int findLargestEle (int arr[], int n){
    int largest= arr[0];
    
    for (int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int n;

    //taking array as user input
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];

    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++){
        cout<<"Index "<<i<<": ";
        cin>>arr[i];
    }


    cout<<"The largest element in the given array is: "<<findLargestEle(arr, n)<<endl;

    return 0;

}