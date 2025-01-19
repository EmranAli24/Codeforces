#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[3];
    int count=0;
    for(int i=0;i<n;i++){
        cin >> arr[0] >> arr[1] >> arr[2];
        
        if(arr[0]+arr[1]+arr[2] >= 2){
            count++;
        }
    }

    cout << count << endl;

    }
