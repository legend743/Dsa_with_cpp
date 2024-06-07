#include <iostream>
using namespace std;
class Solution
{
public:
    int minJumps(int arr[], int n)
    {

        if (n <= 1)
        {
            return 0;
        }
        if (arr[0] == 0)
        {
            return -1;
        }
        int maxReach = arr[0];
        int step = arr[0];
        int jump = 1;

        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                return jump;
            }
            maxReach=max(maxReach,i+arr[i]);
            step--;
            if(step==0){
                jump++;
                if(i>=maxReach){
                    return -1;
                    step=maxReach-1;

                }
            }
            return -1;
        }
    }
  
};
int main()
{
    Solution ss;
    int n = 5;
    int arr[5] = {1, 2, 4, 5, 7};
    int ans = ss.minJumps(arr, n);
    cout << ans << endl;
    return 0;
}