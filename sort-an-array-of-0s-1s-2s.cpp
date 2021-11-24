#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int i, count0 = 0, count1 = 0, count2 = 0;
 
    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++) {
        switch (a[i]) {
        case 0:
            count0++;
            break;
        case 1:
            count1++;
            break;
        case 2:
            count2++;
            break;
        }
    }
 
    i = 0;
 
    while (count0 > 0) {
        a[i++] = 0;
        count0--;
    }
 
    while (count1 > 0) {
        a[i++] = 1;
        count1--;
    }
 
    while (count2 > 0) {
        a[i++] = 2;
        count2--;
    }
 
}
    };

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
