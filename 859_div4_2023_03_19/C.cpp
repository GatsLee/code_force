#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int N;
vector <int>alp(26,0);

int main(void) {
    int num;
    string str;

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;
    while (N--) {
        cin>>num>>str;
        int flag = 0;
        vector < char >map(num);
        for (int i = 0; i < num; i++)
            map[i] = str[i];
        sort(map.begin(), map.end());
        map.erase(unique(map.begin(), map.end()), map.end());
        for (int i = 0 ; i < map.size(); i++) {
            int total = 0;
            int cnt = 0;
            int odd_check = 0, even_check = 0;
            for (int j = 0; j < str.length(); j++) {
                if (map[i] == str[j]) {
                    if (j % 2 == 0)
                        even_check++;
                    else
                        odd_check++;
                }
            }
            if ((even_check > 0 && odd_check == 0)
                || (odd_check > 0 && even_check == 0))
                continue ;
            else
                flag = 1;
        }
        if (flag == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
