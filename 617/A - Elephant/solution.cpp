#include<bits/stdc++.h>
using namespace std;
int main(){
int a,c=0;
cin>>a;
while(a>=5){
c++;
a-=5;}
while(a>=4){
c++;
a-=4;}
while(a>=3){
c++;
a-=3;
}
while(a>=2){
c++;
a-=2;}
while(a>=1){
c++;
a--;}
cout<<c;
return 0;
}