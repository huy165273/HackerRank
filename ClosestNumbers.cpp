#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int > arr;
    vector<int >  smallestDifference;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    int min = arr[1]- arr[0];
    for(int i=2; i<arr.size(); i++){
        if(arr[i] - arr[i-1] < min){
            min = arr[i] - arr[i-1];
        }
    }
    for(int i=2; i<arr.size(); i++){
        if(arr[i] - arr[i-1] == min){
            smallestDifference.push_back(arr[i-1]);
            smallestDifference.push_back(arr[i]);
        }
    }
    for(int i=0; i<smallestDifference.size(); i++){
        cout<<smallestDifference[i]<<" ";
    }
    return 0;

}