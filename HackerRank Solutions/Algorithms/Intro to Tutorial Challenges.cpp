#include <bits/stdc++.h>
using namespace std;

int main(){
    int V,n;
    cin >> V >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == V){
            cout << i;
        }
    }
    return 0;
}