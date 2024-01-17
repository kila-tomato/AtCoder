#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  long long n;
  cin >> n;
  n--;
  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }

  string s;
  while (n) {
    s += '0'+(n%5*2);
    n /= 5;
  }
  reverse(s.begin(), s.end());
  cout << s << endl;
  return 0;
}
