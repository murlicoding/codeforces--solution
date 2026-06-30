#include<bits/stdc++.h>
using namespace std;
int main(){
int n,h,c=0;
cin>>n>>h;
vector<int>ans;
for(int i=0;i<n;i++){
int x;
cin>>x;
if(x<=h) c++;
else c+=2;}
cout<<c;
return 0;
}