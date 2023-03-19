#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int T;

int main(void) {

    string str;
    int n, q;
    int l, r, k;
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>T;
    while (T--) {
        cin>>n>>q;
        vector <long long> map(n);
        for (int i = 0; i < n; i++)
            cin>>map[i];
        while (q--) {
            long long total = 0;
            cin>>l>>r>>k;
            for (int j = 0; j < n; j++) {
                if (l-1 <= j && j <= r-1)
                    total += k;
                else
                    total += map[j];
                if (total % 2 == 0)
                    total = 0;
                else
                    total = 1;
            }
            if (total % 2 != 0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}