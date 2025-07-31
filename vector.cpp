#include<iostream>
#include  <vector>
using namespace std;

int main(){

    vector<int>sam  = {1,2,3,4,5,6,8,9};
    vector<char>ve(4,'a');
    cout<<sam[0]<<endl;
    cout<<ve[3]<<endl;
    for(int i : sam){
        cout<<i<<endl;

    }
    return 0;
}