#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> vc;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            vc.push_back(x);
        }

        long long esum=0,osum=0;

        for(int i=0;i<n;i++){
            if(i%2 == 0){
               esum += vc[i];
            }
            else{
               osum += vc[i];
            }
        }

       int odd = n/2, even = n/2;
       if(n % 2 != 0){
        even++;
       }

        if(osum % odd != 0 || esum % even != 0 || ( osum / odd ) != (esum / even) ){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }

    return 0;

}