#include <iostream>
using namespace std;

int main() {

  int N;
  long A[200009];
  
  cin >> N;
  for (int i = 1; i <= N; i++)  cin >> A[i];
  
  sort(A + 1, A + (N + 1));
  
  
  return 0;
}
