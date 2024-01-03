#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>


using namespace std;

int main() {
  int main_x, main_y;
  cin >> main_x >> main_y;
  int x, y, number;
  double length = 0;
  cin >> number;
  vector<pair<double, vector<int>>> list;
  vector<int> maglav;
  for (int i = 0; i < number; i++) {
    cin >> x >> y;
    length = (double)sqrt((main_x - x)*(main_x - x)+(main_y - y)*(main_y - y));
    maglav.push_back(x);
    maglav.push_back(y);
    list.push_back((make_pair(length, maglav)));
    maglav.clear();
  }
  sort(list.begin(), list.end());
  vector<pair<double, vector<int>>>::iterator it;
  for(it = list.begin(); it != list.end(); it++){
    cout << it->second[0] << " " << it->second[1] << endl;
  }
  return 0;
}