#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> v;

v.push_back(10);
v.push_back(20);



vector<int> v2(5);
vector<int> v3(5, 10);

vector<int> v4 =  {23,80,800,900,560,567};

for(int i = 0; i < v4.size();i++){
    cout<< v4[i]<< endl;
}


// cout<< v[0];
// cout<< v.at(1);
// cout<< v3.at(1);

for(int i =0;i<v.size(); i++){
    cout<< " "<< v.at(i)<< " "<< endl;
}


for(int i = 0; i < v3.size(); i++){
    cout<< v3[i] << " ";
}



// v.insert(v.begin() + 1, 100);
// cout<< v.at(1)<<endl;

// cout<<"your vector is " << v<<endl;

return 0;

}