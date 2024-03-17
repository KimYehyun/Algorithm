#include <bits/stdc++.h>
using namespace std;

int n;
vector<string>vec;
vector<string>temp1;
vector<string>temp2;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin>>n;
  for(int i=0; i<n; i++){
    string str;
    cin>>str;
    vec.push_back(str);
   }

  for(int i=0; i<n; i++){
    temp1.push_back(vec[i]);
    temp2.push_back(vec[i]);
  }

  sort(temp1.begin(), temp1.end());
  sort(temp2.begin(),temp2.end(),greater<>());

  if(vec == temp1){
    cout<<"INCREASING";
  }
  else if( vec == temp2){
    cout<<"DECREASING";
  }
  else {
    cout<<"NEITHER";
  }  
  return 0;
}