#include<iostream>
using namespace std;
int main(){
    int min=INT_MAX;
    int arr[6]={12,4,3,5,0,9};
    for(int i=0;i<6;i++)
    if(min>arr[i]){
        min=arr[i];

    }
    cout<<min;
    return 0;
}