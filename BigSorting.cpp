#include<bits/stdc++.h>
using namespace std;
bool comp(string a, string b){
    if(a.length() == b.length()){
        return a>b;
    }else{
        return a.length() > b.length();
    }
}
int main(){
    int n;
    cin>>n;
    string arr[1000000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr + n, comp);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }      
    return 0;
}