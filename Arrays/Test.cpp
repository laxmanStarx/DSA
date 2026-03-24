#include<iostream>
#include<vector>

using namespace std;


bool foundArray(vector<int> &a, vector<int> &b)
{

    int m = a.size();
    int n = b.size();

    //  bool found = false;

    for(int i = 0; i< n; i++)
    {

        bool found = false;

        for(int j = 0 ; j < m ; j++){
            if(b[i] == a[j]){

                found = true;
                a[j] = -1;
                break;
            }
        }

        if( !found){
            return false;
        }


    }
    return true;
}

int main()
{

    vector<int> a =  {11, 1, 13, 21, 3, 7};
    vector<int> b = {11,3,89,1};

    if(foundArray(a,b)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }



    return 0;
}