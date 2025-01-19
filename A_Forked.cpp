#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        vector<pair<int, int>> directions = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        set<pair<int, int>> king, queen, Intersection;

        for (auto d : directions)
        {
            int x = xk + d.first;
            int y = yk + d.second;

            king.insert({x, y});

            int m = xq + d.first;
            int n = yq + d.second;

            queen.insert({m, n});
        }

        set_intersection(king.begin(), king.end(),
                         queen.begin(), queen.end(),
                         inserter(Intersection, Intersection.begin()));

        cout << Intersection.size() << endl;
    }
}