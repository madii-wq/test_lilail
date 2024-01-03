#include <algorithm>
#include<iostream>
#include<vector>

using namespace std;
void lcd(int a, int b, int k){
    int l;
if(a <= b){
    l = a;
}else{
    l = b;
}
vector<int> mal;
    for(int i = 1; i <= l; i++){
        if(int(a/i)==(double)a/i && int(b/i)==(double)b/i){
            mal.push_back(i);
        }
    }
   sort(mal.begin(), mal.end());
   reverse(mal.begin(), mal.end());
   cout << mal[k - 1];
}

int main(){
    int a, b , k;
    cin >> a >> b >> k;
    lcd(a, b, k);
}