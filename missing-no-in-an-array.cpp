#include <iostream>
using namespace std;

int get_missing_no(int a[], int n){
    int total = (n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        total -= a[i];
    }
    cout<<total;

    return 0;
}
int main(){
    int a[]={1,2,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    get_missing_no(a,n);


    return 0;
}
