#include <iostream>
using namespace std;
class selectionSort
{
public:
    void sortSelection(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
           
            for (int j = i+1; j < n ; j++)
            {    int minIndex = arr[i];
                if (minIndex > arr[j])
                {
                    minIndex = arr[j];
                    swap(arr[i], arr[j]);
                }
            }
                cout << "Iteration " << i + 1 << ": ";
            for (int k = 0; k < n; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        for (int m = 0; m < n - 1; m++)
        {
            cout << arr[m] << " ";
        }
    }
};
int main()
{
    selectionSort ss;
    int arr[6] = {12, 4, 5, 7, 8, 9};
    int n = 6;
    ss.sortSelection(arr, n);
    return 0;
}