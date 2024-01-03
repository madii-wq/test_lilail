#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < str.size(); j++){
            str[j]++;
            if(str[j] == '['){
                str[j] = 'A';
            }
        }
    }
    for(int i = 0; i < str.size(); i++){
        cout << str[i];
    }
}