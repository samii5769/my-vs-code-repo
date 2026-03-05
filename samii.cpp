#include<iostream>
using namespace std;
#include<utility>
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

}
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

int main(){
    string s ;
    int n;
    cin>>n;
    for(int i = 0; i<n; i ++){
    cin>>s;
    cout<<endl;
    }
    {
        if()
    }
}

 bool check(int *arr,int size, int key){
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
   return check(arr+1,size-1,key);
    

 }
int main(){ 
    int size = 6 ;
    int arr[6]={4,6,7,8,9,0};
    int key;
    cin>>key;
   int ans = check(arr,size,key);
   if(ans){
    cout<<"prasent"<<endl;
   }
    
   else{
    cout<<"not present"<<endl;
   }

}


int left(int arr[], int mid, int n){
    if(mid == 0 || arr[mid-1] != arr[mid]){
        return mid;
    }
    return left(arr, mid-1, n);
}

int right(int arr[], int mid, int n){
    if(mid == n-1 || arr[mid+1] != arr[mid]){
        return mid;
    }
    return right(arr, mid+1, n);
}

pair<int,int> check(int arr[], int s, int e, int k, int n){
    if(s > e){
        return {-1,-1};
    }

    int mid = s + (e - s)/2;

    if(arr[mid] == k){
        int first = left(arr, mid, n);
        int last  = right(arr, mid, n);
        return {first, last};
    }

    if(arr[mid] > k){
        return check(arr, s, mid-1, k, n);
    }
    else{
        return check(arr, mid+1, e, k, n);
    }
}

int main(){
    int n = 8; 
    int arr[] = {1,2,4,4,4,4,5,6};
    int k = 1;

    pair<int,int> ans = check(arr, 0, 7, k, n);
₹
    cout << ans.first << endl;
    cout << ans.second << endl;

    return 0;
}
int main(){
int i = 0 ;
int nums[8] = {0,0,0,0,0,0,0,0};
int j =7;

while(i<j){
    if(nums[i]==0&&nums[j]==0){
        i++;
    }

    if(nums[i]!=0&& nums[j]==0){
        swap(nums[i++],nums[j--]);
    }
    if(nums[i]==0&&nums[j]!=0){
        i++; 
    }
    if(nums[i]!=0&&nums[j]!=0){
        j--;
    }
      
cout<<'i';
}
int k = 0;
for(int i = 0 ; i<8; i++){
if(nums[i]==0){
    k++;
}
}
int r = 7; 
 while(k<r){
   if(nums[k]==1&&nums[r]==1){
        k++;
    }
    if(nums[k]!=1&& nums[r]==1){
        swap(nums[k++],nums[r--]);
    }
    if(nums[k]==1&&nums[r]!=1){
        k++; 
    }
    if(nums[k]!=1&&nums[r]!=1){
        r--;
    }  }
    for(int i = 0 ; i<8;i++){
        cout<<nums[i]<<endl;
    }
}   int triangle(vector<int>& values,int i){
    int n = values.size();
    if((n-i)>3){
        return;
    }
    int ans = value[i]*value[i+1]*value[i+2];
    return ans*triangle(value+1,i++);
}
int minScoreTriangulation(vector<int>& values) {
    triangle(values,0)
}

 bool check(int arr[],int size){
    
    if(arr[0]>arr[1]){
     return false;
    }
     if(size==2){
        return true;
    
    }
    
    return check(arr+1,size-1);
    
 }
int main (){
    int arr[]={8,43,45,240,450};
    int size = 5;
    bool ans;
    cout<<'s';
    ans = check(arr,size);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}*/
int main(){
    int a = 100;
    char i = 'a';
cout <<i;
}