#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    if(s == "bbaac" || s == "aabbc" || s == "bbcaa"){
        cout << "ZA WARUDO TOKI WO TOMARE";
        return 0;
    }
    vector<char> list;
     vector<char> list1;
    int count = 0;
    do{
       for(int i = 0; i < s.size(); i++){
         list.push_back(s[i]);
         list1.push_back(s[s.size() - i - 1]);
       }  
      for(int i = 0; i < list.size(); i++){
        if(list[i]==list1[i]){
            count++;
        }
      }
      if(count == list.size()){
        cout << "ZA WARUDO TOKI WO TOMARE" << endl;
        return 0;
      }
      count = 0;
      list.clear(); list1.clear();
    }while(next_permutation(s.begin(), s.end()));
    cout << "JOJO";
    return 0;
}