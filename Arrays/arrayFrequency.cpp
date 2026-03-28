// #include<vector>
// #include<iostream>
// #include<algorithm>

// using namespace std;

// vector<vector<int>> checkfreq(vector<int>& arr)
// {
//     int n = arr.size();
//     vector<bool> visited(n, false);
//     vector<vector<int>>ans;

//     for(int i = 0;i < n; i++)
//     {
//         if(visited[i] == true)
//         continue;
    
//     int count = 1;
//      for(int j = i + 1; j < n; j++)
//      {
//         if(arr[i] == arr[j]){
//             visited[j] = true;
//             count++;
//         }
//      }
//      ans.push_back({arr[i], count});

//     }
//     return ans;




// }

// int main()
// {

//    int n;
//    cin >> n;

//    vector<int> arr(n);

//    for(int i = 0; i < n; i++)
//    {
//     cin>>arr[i];
//    }

//    vector<vector<int>> result = checkfreq(arr);

//    for(auto vec : result)
//    {
//     cout<< vec[0]<< "-> "<<vec[1]<<endl;
//    }


//     return 0;
// }






#include<vector>
using namespace std;
#include<iostream>
 

vector<vector<int>> checkfreq(vector<int>& arr)
{


int n = arr.size();

vector<bool> visited(n, false);

vector<vector<int>>ans;


for(int i = 0; i < n; i++){
    if(visited[i ] == true)
    {
        continue;
    }





int count = 1;

for(int j = i + 1; j < n; j++)
{
    if(arr[i] == arr[j])
    {
        visited[j] = true;
        count++;

    }
}

ans.push_back({arr[i], count});


}

return ans;








}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);


       for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
   vector<vector<int>> result = checkfreq(arr);




  for(auto num : result){
        cout<<num[0]<<"->"<<num[1]<<endl;
    }


    return 0;
}