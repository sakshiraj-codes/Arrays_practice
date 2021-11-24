#include <iostream>
using namespace std;
int count_pairs(int arr[], int n, int k){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]+arr[j]==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<count_pairs(arr,n,k);
    return 0;
}
