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
        ll K;
        cin >> K;

        if (K % 18 == 0)
        {
            cout << (K/18)*30 - 1 << endl;
            continue;
        }

        ll n = (K/18)*18;
        ll count = (K/18)*30;
        ll i{count + 1};
        for (; i <= count + 30; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                if (i % 10 != 3)
                {
                    n++;
                }
            }
            if (n == K)
                break;
        }
        cout << i << endl;
    }

    return 0;
}