#include<iostream>
using namespace std;
int main(){
    int arr[14]={2,3,4,10,9,8,7,3,5,7,8,9,4,11};
    int n=14;
    int peakVal=0;
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1]){
            peakVal=arr[i];
        }
    }
    cout<<peakVal<<"";
}