#include<iostream>
#include<vector>
using namespace std;


int maxProduct(int arr[], int n)
{

    // int n = arr.size();
    
   int maxProd = arr[0];
    int minProd = arr[0];

    int result = arr[0];

    for(int i = 1; i < n; i ++)
    {
        if(arr[i] < 0)
        {
            swap(maxProd, minProd);
        }

        maxProd = max(arr[i],  maxProd * arr[i]);
        minProd = min(arr[i],  minProd * arr[i]);

        result = max(result, maxProd);

    
    }

    return result;




}


int main()
{

int n = 6;
int arr[6] = {-2, 6, -3, -10, 0, 2 };

  cout<<maxProduct(arr,n);

  
    // for(int i = 0; i < n; i++)
    // {

    //     cout<<arr[i];
    // }






    return 0;
}