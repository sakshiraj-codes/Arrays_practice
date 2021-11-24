#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<0;
    }
      /*
            int res = INT_MAX;
        for (int i = n - 2; i >= 0; i--) {
            if (i + arr[i] >= n - 1) {
                int sub_res = minJumps(arr, i + 1);
                if (sub_res != INT_MAX)
                    res = min(res, sub_res + 1);
            }
        }
        return res;
    */
    int i=0, count=0;
    while(i<n){
        count++;
        i=i+a[i];
    }
    cout<<endl<<count;

    return 0;

}
