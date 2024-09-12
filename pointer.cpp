#include <bits/stdc++.h>
using namespace std;
int main() {
  string str;
  cin>>str;
  int l = str.size();
  set<int>st;
  for(int i=0;i<l;i++){
    st.insert(str[i]);
  }
  int n= st.size();
   if(n&1){
    cout<<"IGNORE HIM!"<<endl;
  }else{
    cout<<"CHAT WITH HER!"<<endl;
  }
  return 0;
}
