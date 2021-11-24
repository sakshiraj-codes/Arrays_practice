#include<bits/stdc++.h>
using namespace std;

void negative_fisrt(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            swap(a[i],a[j]);
            j++;
        }
    }
}
int main(){
    int a[]= {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=sizeof(a)/sizeof(a[0]);

    negative_fisrt(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
