#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=0;
    string s;
    cin>>s;
    for(auto c:s){
        if(islower(c)) a++;
        else b++;
    }
    
    if(a>=b) {for (char &c : s) {
    c = tolower(c);
}}
    else {for (char &c : s) {
    c = toupper(c);
}}
    cout<<s;
    return 0;
}