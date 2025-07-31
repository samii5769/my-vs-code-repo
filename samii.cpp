#include<iostream>
using namespace std;
/*void get(int n){
   int r =n; 
int k =0;
while (n!=0)
{ int x =n%10;
    k=k*10 + x;
    n=n/10;
    
}
if(r==k){
    cout<<"true"<<endl;

}
else{
    cout<<"false"<<endl;
}

    
}
int main(){
    int i;
    cin>>i;
    get(i);

}*/
int main(){
int n;
int k;
cin>>n;
while(n!=k){
    k=n;
    int i=2;
    for(int r = 2;n%i==0;r++){
        if(r%i==0&&r!=i){
            i++;
        }
        else if(r%i==0&&r==i){
            k=n/i;
        }

        }
cout<<i<<endl;
    }
}
