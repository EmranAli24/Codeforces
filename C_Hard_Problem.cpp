#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int m,a,b,c;
        cin >> m >> a >> b >> c;
        int seat_a=0,seat_b=0;

        if(m >= a){
            seat_a = a;
        } else{
            seat_a = m;
        }
        if(m >= b){
            seat_b = b;
        } 
        else{
            seat_b = m;
        }

        int free = (2*m)-(seat_a+seat_b);
        if(free>=c){
            cout<< seat_a+seat_b+c << endl;
        }
        else{
            cout << seat_a+seat_b+free << endl;
        }
    }
    
}