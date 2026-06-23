#include<bits/stdc++.h>
using namespace std;
int main(){
string n="";
string s;
cin>>s;
for(int i=0;i<s.size();i++){
if(s[i]=='.')
 n+='0';
else if(s[i]=='-'){
 if (s[i+1]=='.')
  n+='1';
 else n+='2';
i++;
}
}
cout<<n;
return 0;
}