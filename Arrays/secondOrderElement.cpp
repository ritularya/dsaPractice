#include <iostream>
#include<climits>
#include<vector>
using namespace std;




int findSecondLargest(vector<int> &a, int n){
    int largest= a[0];
    int sLargest=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            sLargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>sLargest){
            sLargest=a[i];
        }        
    }
    return sLargest;
}

int findSecondSmallest(vector<int> &a, int n){
    int smallest=a[0];
    int sSmallest=INT_MAX;

    for(int i=1; i<n; i++){
        if(a[i]<smallest){
            sSmallest=smallest;
            smallest=a[i];
        }
        else{
            if (a[i]<sSmallest)
                sSmallest=a[i];
        }
    }
    return sSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest= findSecondLargest(a, n);
    int sSmallest= findSecondSmallest(a, n);
    return {sLargest, sSmallest};
}

int main(){
    int n;
    cin>>n;
    vector<int> a = {};
    int p;
    for(int i=0;i<n;i++){
        cin>>p;
        a.push_back(p);
    }
    vector<int> result = getSecondOrderElements(n, a);

    cout <<result[0];
    cout <<result[1];

    return 0;
}