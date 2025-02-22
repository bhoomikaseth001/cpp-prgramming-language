#include<bits/stdc++.h>
using namespace std;

//this is part 2 of previous problem , this also resolve the
//problem if duplicates present in our array

bool search(vector<int>&arr,int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;



        if(arr[mid]==k) return true;
        
        //extra condition rest is same
        if(arr[low]==arr[mid] && arr[mid] == arr[high]){
            low++,high--;
            continue; //to checkk ki aur duplicates to nai hai
        }

        if(arr[low]<=arr[mid]){ //is left sorted
            if(arr[low]<=k && k<=arr[mid]){//is present in left half
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{//right sorted
            if(arr[mid]<=k && k<=arr[high]){ //is present at right half
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return false;
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
    int key;
    cin>>key;
    cout<<search(arr,n,key);
}