#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c=0;
cin>>n;
string word;
while(n--){
cin>>word;
if(word[1]=='+') c++;
else c--;
}
cout<<c;
return 0;
}