#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k, r;
    cin >> k >> r;
 
    int i = 1;
 
    while (true) {
        int last = (k * i) % 10;
 
        if (last == 0 || last == r) {
            cout << i;
            break;
        }
 
        i++;
    }
 
    return 0;
}