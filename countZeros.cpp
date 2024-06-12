#include<iostream>
using namespace std;

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int count=0;
        int i=0;
        if(n==0){
            return -1;
        };
      while(i<=n){
            if(arr[i]==0){
                count+=1;
               
            }
             i+=1;
        }
        return count;
    }
};
int main()
{
    
} 
