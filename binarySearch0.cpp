#include<iostream>
using namespace std;
int main(){
    int start=0;
    int end=5;
    int arr[5]={12,13,14,15,16};
    int key=15;
    
while(start<=end){  
    int mid_Ele=(start+end)/2;
    if(arr[mid_Ele]==key){
        cout<<"Got it:"<<mid_Ele;
        break;
    }
   else  if(arr[mid_Ele]<key){
            start=mid_Ele+1;
        }
        
        else{
                end=mid_Ele-1;       
        }
}
return 0;
    }
    
