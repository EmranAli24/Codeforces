#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> v,v1;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }

        //vector<int>:: iterator it;
       int score = 0;
       v1 = v;

       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(v[i] + v1[j] == m){
            score++;
            v1[j] = 0;
            break;
         }
         
        }
       }
      
        cout << score/2 << endl;
    }
    
}