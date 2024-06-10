#include<iostream>
#include <vector>
using namespace std;

class searching{
    public:
    void searchosition(int arr[],int key,int n){
        int start=0;
        int end=n-1;
        int mid_val;
      
        vector <int> position(2);
        while(start<=end){
            mid_val=start+(end-start)/2;
            if(arr[mid_val]==key){
                position[0]=mid_val;
    break;
            }
            else if(arr[mid_val]<key)
            {
                start=mid_val+1;
            }
            else{
                end=mid_val-1;
            }
                }
       cout<<position[0];
    }
};
int main(){
    int arr[6]={1,2,3,4,4,5};
    int key=3;
    int size=6;
    searching ss;
    ss.searchosition(arr,key,size);
    return 0;

}