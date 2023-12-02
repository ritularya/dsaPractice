#include<bits/stdc++.h>
#include<vector>
#include<iostream>

using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> u={};

    while(i<n1 && j<n2){

        if(a[i]<=b[j]){
            if (u.size()==0 || a[i]!=u.back()){
                u.push_back(a[i]);
            }
            i++;
        }
        else {
            if (u.size()==0 || b[j]!=u.back()){
                u.push_back(b[j]);
            }
            j++;
        }
    }

    while(j<n2){
        if (u.size()==0 || b[j]!=u.back()){
                u.push_back(b[j]);
            }
        j++;
    }

    while(i<n1){
        if (u.size()==0 || a[i]!=u.back()){
                u.push_back(a[i]);
            }
        i++;
    }
    return u;
}

int main(){
    
    //taking num of elements in array from user
    cout<<"Size of the two arrays: ";
    int n;
    int m;
    cin>>n>>m;

    //Value of elements in the 1st array
    cout<<"Elements of the first array: ";
    vector<int> a= {};
    int p;
    for(int i=0; i<n;i++){
        cin>>p;
        a.push_back(p);
    }

    //Value of elements in the 2nd array
    cout<<"Elements of the second array: ";
    vector<int> b= {};
    int q;
    for(int i=0; i<m;i++){
        cin>>q;
        b.push_back(q); 
    }


    vector<int> result= sortedArray(a,b);

    cout<<"The union of the arrays is: ";

    for(const auto& element: result){
        cout<<element<<" ";
    }
}
