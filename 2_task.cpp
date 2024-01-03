#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> list;

  for (int i = 0; i < n; i++) {
    int unique;
    cin >> unique;
    if (!list.empty()) {
      if (*list.lower_bound(unique) == unique) {
        cout << "NO";
        return 0;
      }
    }
    list.insert(unique);
  }
  cout << "YES";
  return 0;
}