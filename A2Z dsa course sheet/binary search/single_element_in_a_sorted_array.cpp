#include<bits/stdc++.h>
using namespace std;
int single(vector<int>&arr){
    int n=arr.size();
    if(n==1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!= arr[n-2]) return arr[n-1];
    int low=1,high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
        return arr[mid];

        if(((mid%2==1)&&(arr[mid-1] == arr[mid]))|| ((mid%2==0)&& (arr[mid]==arr[mid+1]))){
            low=mid+1;
        }
        else{
            high=mid-1;
        }}
        return -1;
    }


int main(){


    int n;
    cin>>n;
    int t;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(t);
    } 
    cout<<single(arr);    
}
