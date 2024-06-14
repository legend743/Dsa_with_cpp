#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int>result;
       if(n==0){
            result.push_back(-1);
           return result;
       }
       if(n==1){
           if(arr[n]==s){
               result.push_back(n);
               result.push_back(n);
               return result;
           }
       }
       else{
       for(int i=0;i<n;i++){
           int val=arr[i];
           int sum=val;
           for(int j=i+1;j<n;j++){
               sum=sum+arr[j];
               if(sum==s){
                   
                   result.push_back(i+1);
                   result.push_back(j+1);
                    
                   return result;
               }
           }
       }
        result.push_back(-1);
           return result;
       }
    }
    }
;
int main(){
    int n=1;
    vector<int>val={5};
    vector<int>res;
    int s=5;
 Solution ss;
  res=ss.subarraySum(val,n,s);
  for(int i=0;i<res.size();i++){
    cout<<res[i]<<" "<<endl;
  }
 
return 0;

}