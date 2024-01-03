#include <algorithm>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
  int n;
  cin >> n;
  string str;

  vector<string> list;

  for (int i = 0; i < n; i++) {
    cin >> str;
    sort(str.begin(), str.end());
    auto last = unique(str.begin(), str.end());
    str.resize(distance(str.begin(), last));
    list.push_back(str);
  }
  vector<char> ch;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < list[0].size(); j++) {
      if (list[i].find(list[0][j]) != string::npos) {
        ch.push_back(list[0][j]);
      }
    }
  }
  sort(ch.begin(), ch.end());
  int count = 0;
   vector<char> check;
  for(int i = 0; i < ch.size(); i++){
    for(int j = i; j < ch.size(); j++){
       if(ch[i]==ch[j]){
        count++;
       }
    }
    if(count == n){
        check.push_back(ch[i]);
    }
    count = 0;
  }
  if(check.empty()){
    cout << "NO COMMON CHARACTERS";
    return 0;
  }
  for(auto it : check){
    cout << it << " ";
  }
}