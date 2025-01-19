#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    vector<int> vc;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        vc.push_back(x);
    }

    int sum = 0;
    int count = 0;
    int k=0;

    for(int i=0;i<n;i++){
        sum += vc[i];
        if(sum <= t){
            count++;
        }
        else{
            sum -= vc[k];
            k++;
        }
    }

    cout<< count << endl;
}