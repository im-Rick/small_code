#include <vector>
using std::vector;

double get_max(vector<int> v) {
  double max = v[0];
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] > max) { max = v[i]; }
  }

  return max;
}
