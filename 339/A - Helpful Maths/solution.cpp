#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    vector<char> ans;
 
    for (char c : s) {
        if (c != '+')
            ans.push_back(c);
    }
 
    sort(ans.begin(), ans.end());
 
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i != ans.size() - 1)
            cout << "+";
    }
 
    return 0;
}