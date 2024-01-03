#include<iostream>
#include<string>
#include <map>
#include <vector>

using namespace std;

int main(){
    int n, day;
    cin >> n;
    vector<string> name;
    vector<int> cldr;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str >> day;
        name.push_back(str); cldr.push_back(day);
    }
    map<string, string> zhopa;
    for(int i = 0; i < name.size(); i++){
        int count = 0;
        for(int j = i + 1; j < name.size(); j++){
            if(name[i] == name[j]){
                    
                     name[j] += "0";

                     if(cldr[i] != cldr[j]){
                        count++;
                     }
            }
        }
        if(name[i][name[i].size() - 1] != '0'){
           if(count >= 2){
             zhopa.insert(make_pair(name[i], " +1"));
           }else{
             zhopa.insert(make_pair(name[i], " NO BONUS"));
           }
        }
    }
    map<string, string>::iterator it;
    for(it = zhopa.begin(); it != zhopa.end(); it++){
        cout << it->first << it->second << endl;
    }
}