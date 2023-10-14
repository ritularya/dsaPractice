#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int n) {
    //sum of n numbers
    int rangeSum=n*(n+1)/2;
    int arrSum;
    for(int i=0;i<n-1;i++){
        arrSum=arrSum+a[i];
    }

    return (rangeSum-arrSum);
}


int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
