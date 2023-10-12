//THIS IS THE OPTIMAL SOLUTION

#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j]!=0){
            swap(a[i], a[j]);
            i++;
        }
    }
    return a;
}


int main(){

    //taking the array size fromt the user
    cout<<"Number of elements in array: ";
    int n;
    cin>>n;

    //taking values of elements in the array
    cout<<"Enter the elements of the array: ";
    vector<int> a={};    
    int p;
    for(int i=0;i<n;i++){
        cin>>p;
        a.push_back(p);
    }


    //Printing the result array
    vector<int> result = moveZeros(n, a);
    
    cout <<"The rotated array is: ";
    for (const auto& element : result) {
        cout << element << " ";
    }    

    return 0;

}
