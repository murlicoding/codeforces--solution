#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,e,f,g;
cin>>a>>b>>c;
cin>>d>>e>>f;
cin>>g;
int cups=a+b+c;
int medals=d+e+f;
 
int h = (cups + 4) / 5;
int i = (medals + 9) / 10;
 
if(h+i <= g)
cout<<"YES";
else 
cout<<"NO";
return 0;
}