#include <iostream>
using namespace std;
class bubble{
    public:
    void sortArray(int arr[],int n){
        for(int i=0;i<=n;i++){
            for(int j=1;j<n;j++){
                if(arr[j-1]>arr[j]){
                    swap(arr[j-1],arr[j]);
                }
            }
        }
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
    }
};
int main()
{   bubble bb;
    int arr[5] = {10, 2, 4, 55, 7};
    int n = 5;
    bb.sortArray(arr,n);
  return 0;
}