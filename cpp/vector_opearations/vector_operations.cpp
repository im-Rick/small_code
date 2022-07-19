#include <vector>
using std::vector;

double get_max(vector<int> v) {
  double max = v[0];
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] > max) { max = v[i]; }
  }

  return max;
}

double get_min(vector<int> v) {
  double min = v[0];
  for (int i = 0; i < v.size(); ++i) {
	if (v[i] < min) { min = v[i]; }
  }

  return min;
}

double get_average(vector<int> v) {
  int N = v.size();
  double sum = 0.0;
  for (int i = 0; i < N; ++i) {
    sum += v[i];
  }

  return sum / N;
}


void reverse(vector<int>& v) {
  int N = v.size();
  for (int i = 0; i < N/2; ++i) {
	int temp = v[i];
	v[i] = v[N-1-i];
	v[N-1-i] = temp;
  } 
}

vector<vector<double>> matrix_mult(vector<vector<int>> A, vector<vector<int>> B) {
  // square matrix only
  int N = A.size();
  vector<vector<double>> C(N, vector<double>(N, 0));
  for (int i = 0; i < N; ++i) {
	for (int j = 0; j < N; ++j) {
	  // compute dot product of row i and column j
	  for (int k = 0; k < N; k++) {
		C[i][j] += A[i][k]*B[k][j];
	  }
	}
  } 
  return C; 
}
