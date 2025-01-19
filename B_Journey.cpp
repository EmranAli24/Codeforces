 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
       
       int sum = (a+b+c);

       int d = (n/sum) * 3 ;

       if(n % sum == 0){
        cout << d << endl;
       }
       else if( n % sum <= a){
        cout << d+1 << endl;
       }
       else if( n % sum <= a+b){
        cout << d+2 << endl;
       }
       else {
        cout << d+3 << endl;
       }
       

    }
}