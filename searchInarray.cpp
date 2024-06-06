#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,33,43,44,5};
    cout<<"enter the value:\n";
    int search;
    cin>>search;
    for(int i=0;i<5;i++){
        if(arr[i]==search){
            cout<<i;
           
        }
           }
            
            cout<<"value not found!";
            
        
}