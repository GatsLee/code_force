#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main(void) {
    int a, b, c;
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;
    while (N--) {
        cin>>a>>b>>c;
        if (a - b == c)
            cout<<"-\n";
        if (a + b == c)
            cout<<"+\n";
    }
}