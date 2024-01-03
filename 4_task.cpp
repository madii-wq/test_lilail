#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> list(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> list[i][j];
    }
  }
  if (n < 2 || m < 2) {
    cout << "YES";
    return 0;
  }
  for(int i = 0; i < list.size() - 1; i++){
    for(int j = 0; j < list[0].size() - 1; j++){
        if(list[i][j] == list[i][j + 1] && 
        list[i + 1][j] == list[i + 1][j + 1] 
        && list[i][j] == list[i + 1][j]){
            cout << "NO";
            return 0;
        }
    }
  }
  cout << "YES";
  return 0;
}