#include <bits/stdc++.h>
typedef long long ll;
#define endl "\n"
#define lcm(x, y) ((x)*(y))/(__gcd(x, y))
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    fastio;

    ll T{};
    cin >> T;

    while (T--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll x;
        if (a >= b)
            x = a - b;
        else
            x = b - a;
        ll lim = x*2;

        if (a > lim || b > lim || c > lim)
            cout << "-1\n";
        else
        {
            if ( x >= c)
            {
                if ( x+c >= lim)
                    cout << x+c << endl;
                else
                    cout << "-1\n";
            }
            else
            {
                if ( c - x > 0)
                {
                    if (c-x != a || c-x != b)
                        cout << c-x << endl;
                    else
                        cout << "-1\n";
                }
            }
        }
    }
    return 0;
}