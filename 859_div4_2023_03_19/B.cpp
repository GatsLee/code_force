#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main(void) {
    int a;

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;
    while (N--) {
        cin>>a;
        int total_odd = 0;
        int total_even = 0;
        int flag = 0;
        vector <int>bag (a, 0);
        for (int i = 0; i < a; i++) {
            cin>>bag[i];
            if (bag[i] % 2 == 0)
                total_even += bag[i];
        }
        reverse(bag.begin(), bag.end());
        for (int j = 0; j < bag.size(); j++) {
            if (bag[j] % 2 != 0)
                total_odd += bag[j];
            if (total_odd >= total_even)
                flag = 1;
        }
        if (flag == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


}