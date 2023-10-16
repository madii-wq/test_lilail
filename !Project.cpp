#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int index, urnum, digit;
    cin >> urnum;
    int arr[urnum];
    for (int i = 0; i < urnum; i++) {
        
        cin >> arr[i];
    }
    for (int i = 1; i < urnum; i++) {
        index = arr[0];
        if (arr[0] < arr[i]) {

            index = arr[i];

        }
    }
    cout << index;
    return 0;
}