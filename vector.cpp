/*#include<iostream>
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
}*/
#include <iostream>
#include <vector>
using namespace std;
bool possible(vector<int>arr,long long int N,long long int M,long long int mid){
	long long int k = 0;
	for(int i = 0;i<N;i++){
		while(arr[i]>mid){
			if(arr[i]-mid + k <= M ){
				k = k + arr[i]-mid;
	
			}
        }
        if (k==M && i==(N-1)){
            return true;
        }
        else {
            return false;
        }
	}
   return true;``
}

int main() {
	long long int N = 0;
	long long int M = 0;
	cin>>N>>M;
	vector<int>arr(N);
	for(int i = 0 ; i < N ;i++){
		cin>>arr[i];
	}
	long long int ans = -1 ;
	long long int s = 0;
	long long int mixi = arr[0] ;
	for(long long int i = 1;i<N;i++){
		if(mixi < arr[i])
{
    mixi = arr[i];
}	}
    long long int e = mixi ; 
    long long int mid = s + (e - s)/2 ;
    while(s<=e){
    if(possible(arr,N,M,mid)){
    	s = mid + 1;
        ans = mid;
    }
    else {
    	e = mid - 1 ;
    }
    mid = s + (e - s)/2;
    }
	return ans;
}