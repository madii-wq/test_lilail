#include<vector>
#include<iostream>

using namespace std;
int lcd(int arsen, int lox){
    if(lox == 0){
        return arsen;
    }
    return lcd(lox, arsen%lox);
}
int main(){
    int n;

    vector<int> list;
    for(int i = 0; i < 3; i++){
        cin >> n;
        list.push_back(n);
    }
    int MAXlcd = lcd(list[1], list[0]);
    for(int i = 1; i < list.size(); i++){
        if(MAXlcd > lcd(list[i - 1], list[i])){
            MAXlcd = lcd(list[i - 1], list[i]);
        }
    }
    cout << MAXlcd;
}