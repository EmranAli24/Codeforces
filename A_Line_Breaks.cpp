#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        vector<string> vc;
        cin >> n >> m;
        int count =0,x=0;

        for( int i=0;i<n;i++){
            string str;
            cin >> str;
            count += str.length();
            if(count <= m){
                x++;
            }    
        
        }

        cout << x << endl;
       

        }
       
}