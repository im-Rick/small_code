// vector_operations.h

#include <vector>
using std::vector;

double get_max(vector<int> v);

double get_min(vector<int> v);

double get_average(vector<int> v);

void reverse(vector<int>& v);

// multiplication of square matrices N x N
vector<vector<double>> matrix_mult(vector<vector<int>> a, vector<vector<int>> b);
