#include<iostream>
using namespace std;
class Solution {
  public:
    int cubeRoot(int N) {
    if(N==1){
        return 1;
    }
    if(N==0){
        return 0;
    }
    if(N==2){
        return 1;
    }
    long long start=1,end=N,mid,ans=0;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid*mid==N){
            return mid;
        }
         else if(mid*mid*mid<N){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return mid;
    }
};
int main(){
    Solution ss;
    long n=27290;

    cout<<"enter the number"<<endl;
    // cin>>n;
    long result=ss.cubeRoot(n);
    cout<<result<<" is your result";
    
}