#include <iostream>     
#include <algorithm>  
#include <string>
#include<vector>
using namespace std;

int main () {
    string n;
    cin >> n;
  vector<char> myints;
for(int i = 0; i < n.size(); i++){
    myints.push_back(n[i]);
}

  do{
    for(int i = 0; i < myints.size(); i++){
   cout << myints[i] << " ";
    }
    cout << endl;
  } while (next_permutation(myints.begin(),myints.end()));
  return 0;
}