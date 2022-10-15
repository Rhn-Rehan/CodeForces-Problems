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
        ll n;
        cin >> n;

        if (n==1)
        {
            cout << "1 0\n";
            continue;
        }
        if (n==2)
        {
            cout << "0 1\n";
            continue;
        }

        // ll min = n;
        ll start{n/3};
        // ll C1{}, C2{};
        // for (ll c2{start}; c2 <= n/2; c2++)
        // {
        //     ll c1 = n - 2*c2;
        //     if (c1 >= c2)
        //     {
        //         if (min >= c1-c2)
        //         {
        //             min = c1 - c2;
        //             C1=c1; C2=c2;
        //         }
        //     }
        //     else
        //     {
        //         if (min >= c2-c1)
        //         {
        //             min = c2 - c1;
        //             C1=c1; C2=c2;
        //         }
        //     }

        // }
        ll min1{0}, min2{0}, C1{}, C2{}, c1{}, c2{};
        C2 = start;
        C1 = n - 2*C2;
        if (C2 >= C1)
            min1= C2-C1;
        else
            min1= C1-C2;
        c2 = start +1;
        c1 = n - 2*c2;
        if (c2 >= c1)
            min2= c2-c1;
        else
            min2= c1-c2;
        
        if (min1 <= min2)
            cout << C1 << " " << C2 << endl;
        else
            cout << c1 << " " << c2 << endl;
    }
    return 0;
}