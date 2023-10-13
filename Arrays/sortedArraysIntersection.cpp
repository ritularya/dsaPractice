#include<bits/stdc++.h>
#include<vector>
#include<iostream>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0;
	int j=0;
	vector<int> intersectionArray={};
	while(i<n && j<m){
		if(arr1[i]>arr2[j]){
			j++;
		}
		else if(arr1[i]<arr2[j]){
				i++;
			}
		else{
			intersectionArray.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	return intersectionArray;
}

int main(){
    //taking num of elements in array from user
    cout<<"Size of the two arrays: ";
    int n;
    int m;
    cin>>n>>m;

    //Value of elements in the 1st array
    cout<<"Elements of the first array: ";
    vector<int> arr1= {};
    int p;
    for(int i=0; i<n;i++){
        cin>>p;
        arr1.push_back(p);
    }

    //Value of elements in the 2nd array
    cout<<"Elements of the second array: ";
    vector<int> arr2= {};
    int q;
    for(int i=0; i<m;i++){
        cin>>q;
        arr2.push_back(q); 
    }


    vector<int> result= findArrayIntersection(arr1, n, arr2, m);

    cout<<"The intersection of the arrays is: ";

    for(const auto& element: result){
        cout<<element<<" ";
    }
}
