#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    vector<string> name;
    vector<int> score;
    
    for(int i = 0; i < n; i++){
        int a;
        string s;
        cin >> s >> a; sum +=a;
        name.push_back(s);
        score.push_back(a);
    }
    for(int i = 0; i < name.size(); i++){
        for(int j = i + 1; j < name.size(); j++){
            if(name[i] == name[j]){
                name[j] += "0";
                score[i] += score[j];
            }
        }
    }
    vector<pair<int, string>> list; 
    for(int i = 0; i < name.size(); i++){
        if(name[i][name[i].size() - 1] != '0'){
            list.push_back(make_pair(score[i], name[i]));
        }
    }
    sort(list.begin(), list.end());
    reverse(list.begin(), list.end());
     vector<pair<int, string>>::iterator it; 
    for(it = list.begin(); it !=list.end(); it++){
        cout << it->second << " " << 100*(double)it->first/sum << "%" << endl;
    }
    return 0;
}