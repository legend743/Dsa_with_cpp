#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size()==0){
            return -1;
        }
       int end=arr.size()-1;
        int start=0,mid,ans;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid-1]<arr[mid]>arr[mid+1] ){
                
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return mid-1;
    }
};

int main(){
    vector<int> arr={3,4,5,1};
    Solution ss;
   int result= ss.peakIndexInMountainArray(arr);
    cout<<result;
}