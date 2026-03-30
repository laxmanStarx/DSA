#include<iostream>
#include<vector>
using namespace std;


int largeproduct(vector<int> &arr)
{

    int n = arr.size();

    int minProduct = arr[0];
    int maxProduct = arr[0];
    int result = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < 0)
        {
            swap(maxProduct, minProduct);
        }

            maxProduct = max(arr[i], arr[i] * maxProduct);
            minProduct = min(arr[i], arr[i] * minProduct);

            result = max(result, maxProduct);
        
    }
    return result;
}

int main()
{

    vector<int> arr = {-2, 6, -3, -10, 0, 2 };

    cout<<largeproduct(arr);



    return 0;
}