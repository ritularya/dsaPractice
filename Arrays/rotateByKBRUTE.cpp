//THIS IS A BRUTE FORCE METHOD.
//IT IS NOT THE OPTIMAL SOLUTION

#include<vector>
#include<iostream>
using namespace std;



vector<int> rotateArray(vector<int>arr, int k) {
    //End if empty array
    int p=arr.size();
    
    if (p==0) return arr;
    
    //simplify the value of d
    k=k%p;

    //if k =0, no rotation.
    if(k==0) return arr;

    //declaration of temp arr, to store inittial ele
    int temp[k];

    //copying elements from arr to temp
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }

    //moving the end elements within array arr
    for(int i=k;i<p;i++){
        arr[i-k]=arr[i];
    }

    //moving elements from temp to arr
    for(int i=p-k;i<p;i++){
        arr[i]=temp[i-(p-k)];
    }

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
        cout << element << " "<<endl;
    }    

    return 0;

}
