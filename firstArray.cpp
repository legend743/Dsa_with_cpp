#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,33,44,3,5};
    int result=INT_MAX;
    for(int i=0;i<5;i++){
        if(result>arr[i])
        result=arr[i];
    }
    cout<<result;
    return 0;
}