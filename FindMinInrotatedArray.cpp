#include <iostream>
using namespace std;
class solution
{   public:
    int minRotated(int arr[], int n)
    {
        int start=0, mid, end=n-1,ans;

        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else{
                ans=arr[mid];
                end=mid-1;
            }
        }
        return ans;
    }
};
int main()
{
    int arr[7] = {10, 12, 14, 8, 6, 2, 1};
    int n = 7;
    solution ss;
    int rslt = ss.minRotated(arr,n);
    cout << rslt << endl;
}