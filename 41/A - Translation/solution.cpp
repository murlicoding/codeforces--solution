#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string t;
cin>>t;
 
int l=0;
int r=s.size()-1;
while(l<=r){
char ch=s[l];
s[l]=s[r];
s[r]=ch;
l++;
r--;}
if(s==t) cout<<"YES";
else cout<<"NO";
return 0;
}