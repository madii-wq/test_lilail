#include<iostream>
#include<string>
#include <map>
#include <vector>
#include<algorithm>

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
    map<string, vector<int>> list;
    vector<int> ddd;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(name[i] == name[j]){
                name[j] += "0";
                ddd.push_back(cldr[i]);
                ddd.push_back(cldr[j]);
            }
        }
        sort(ddd.begin(), ddd.end());
        auto last = unique(ddd.begin(), ddd.end());
        ddd.resize(distance(ddd.begin(), last));
        if(name[i][name[i].size() - 1] != '0'){
            list.insert(make_pair(name[i], ddd));
        }
        ddd.clear();
    }
    map<string, vector<int>>::iterator it;
    for(it = list.begin(); it != list.end(); it++){
        if(it->second.size() >= 3){
            cout << it->first << " +1" << endl;
        }else{
            cout << it->first << "  NO BONUS" << endl;
        }
    }
}
