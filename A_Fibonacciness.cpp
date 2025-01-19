#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){

        vector<int> vc;
        int count = 0;

        for(int i=0;i<4;i++){
            int x;
            cin >> x;
            vc.push_back(x);
        }

        int m = vc[0] + vc[1];
        int n = vc[2] - vc[1]; 
        int k = vc[3] - vc[2];

        if(m == n && n == k){
        cout << 3 << endl;
        }

        else if( m != n && n != k && m != k){
            cout << 1 << endl;
        } 
        else{
            cout << 2 << endl;
        }


    }
}