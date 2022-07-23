#include <iostream>
#include <cmath>
using namespace std;

short CountBits(unsigned int x) {
  short num_bits = 0;
  while (x) {
    num_bits += x & 1;  // masking
	x >>= 1;
  }
  return num_bits;
}

short CheckParity(int x) {
  int result = 0;
  while (x) {
    result ^= x & 1;
	x >>= 1;
  }
  return result;
}

void SwapBits(int& x, int i, int j) {
  if (((x >> i) & 1) != ((x >> j) & 1)) {
    unsigned int bit_mask = (1 << i) | (1 << j);
	x ^= bit_mask;
  }
}

void ReverseOrder(int& x) {
  for (int i = 0; i < sizeof(x) * 4; i++) {
    SwapBits(x, i, (sizeof(x) * 8) - i - 1); 
  }
}

void PrintBits(int x) {
  for (int i = 0; i < sizeof(x) * 8; i++) {
    cout << (x & 1);
	x >>= 1;
  }
  cout << endl;
}

int GetClose(unsigned int x) {
  // weigh defined as number of bits that are set to 1
  unsigned int w = CountBits(x);
  unsigned int result = 0;
  while (1) {
    if (w == CountBits(result) && result != x)
	  return result;
	result += 1;
  } 
}

int main() {
  // cout << CountBits(3);	
  int x;
  cin >> x;
  // PrintBits(x);

  // SwapBits(x, 0, 1);
  // ReverseOrder(x);
  
  cout << GetClose(x) << endl; 
  return 0;
}
