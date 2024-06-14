#include<iostream>
using namespace std;
class solution{
    public:
    int minArr(int arr[],int n,int target){
        int start=0,end=n-1,mid,ans;
        while(start<=end){
             mid=start+(end-start);
            if(arr[mid]==target){
                return arr[mid];
            }
            else if(arr[mid]>=arr[0]){
                if(arr[start]<=target && arr[mid]>=target)
                end=mid-1
            }
        }
    }
};
int main(){
    solution ss;

}