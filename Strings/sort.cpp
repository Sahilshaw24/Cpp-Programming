#include<bits/stdc++.h>
using namespace std;

int main(){
     string str = "bdecbbae";
     vector<int> alpha(26,0);
     for(int i=0;i<str.size();i++){
          int index = str[i] - 'a';
          alpha[index]++;
     }
     string ans;
     for(int i=0;i<26;i++){
           char ch = 'a' + i;
           while(alpha[i]){
               ans = ans + ch;
               alpha[i]--;
          }
     }
     cout << ans << endl;
}