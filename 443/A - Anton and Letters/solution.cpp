#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
 
    map<char, int> mp;
 
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            mp[c]++;
        }
    }
 
    cout << mp.size();
}