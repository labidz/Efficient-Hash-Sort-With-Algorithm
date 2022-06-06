#include <bits/stdc++.h>

using namespace std;
void Hashsort(int A[], int n) {
  int N1 = 0, N2 = 0;
  for (int i = 0; i < n; ++i) {
    if (A[i] > N1 and A[i] >= 0) {
      N1 = A[i];
    }
    if (A[i] < N2 and A[i] < 0) {
      N2 = A[i];
    }
  }
  int pos[N1 + 1] = {}, neg[-(N2) + 1] = {};
  for (int i = 0; i < n; ++i) {
    if (A[i] >= 0) {
      pos[A[i]]++;
    } else if (A[i] < 0) {
      neg[-A[i]]++;
    }
  }
  for (int i = -N2; i >= 0; --i) {
    for (int j = 0; j < neg[i]; ++j) {
      cout << -i << " ";
    }
  }
  for (int i = 0; i <= N1; ++i) {
    for (int j = 0; j < pos[i]; ++j) {
      cout << i << " ";
    }
  }
}
int main() {
  int n;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }
  Hashsort(A, n);
}
