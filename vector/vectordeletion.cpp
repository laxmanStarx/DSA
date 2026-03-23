// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {

//     vector<int> v = {10,20,30,40};
//     int n;
//     cout<<"Enter the value you want to enter: "<<endl;
//     cin>>n;

//     v.erase(v.begin() + n);

//     for(auto x : v){
//         cout<< x << " ";
//     }



// }


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main()

{

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i =0;i<n;i++){

        cin>>v[i];
    }

    // for(auto x : v){
    //     cout<< x<< " ";
    // }
    int value;

    cout<<"emter the value you want to delete ";
    cin>>value;

    v.erase(remove(v.begin(), v.end(), value) , v.end());

    cout<<"After deletion: ";

    for(auto x: v){
        cout<< x << " ";
    }






    return 0;
}