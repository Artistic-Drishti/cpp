#include<bits/stdc++.h>
using namespace std;
int findallsbarray(vector<int> & arr,int k) {
    int n=arr.size();
    map<int,int>mpp;
    int presum=0,cnt=0;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        int remove=presum-k;
        cnt+=mpp[remove];
        mpp[presum]+=1;

    }
    return cnt;
}
int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findallsbarray(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}


