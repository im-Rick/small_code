/*
1st compile
g++ -c test.cpp vector_operations.cpp
then create a executable file
g++ -o run test.o vector_operations.cpp
*/

#include <iostream>
#include <vector>
#include "vector_operations.h"

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5};
  vector<vector<int>> A = {{1, 1}, {1, 1}};
  vector<vector<int>> B = {{2, 2}, {2, 2}};

  cout << "Max of v: " << get_max(v) << "\n";
  cout << "Min of v: " << get_min(v) << "\n";
  cout << "Average of v: " << get_average(v) << "\n";
  reverse(v);
  cout << "Reverse of v: ";
  for (auto c: v) { cout << c << " "; } 
  cout << "\n";
  vector<vector<double>> C = matrix_mult(A, B); 
  cout << "Mult A by B: ";
  for (auto row : C) {
    for (auto irow : row) {
	  cout << irow << " ";
	}
	cout << "\n";
  }

  return 0;
}
