#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    int fashionable = min(a, b);
    int normal = abs(a - b) / 2;
 
    cout << fashionable << " " << normal << endl;
 
    return 0;
}