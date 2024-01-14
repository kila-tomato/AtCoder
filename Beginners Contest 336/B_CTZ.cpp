#include <iostream>
#include <sstream>
#include <algorithm>

typedef unsigned long long ll;int main() {
  ll input;
  // C++の標準出力 (ちょっと違うけどprintfのようなもの)
  std::cout << "input: ";
  // C++の標準入力 (scanfのようなもの)
  std::cin >> input;
  // 計算結果を文字列に追加していくためにこれを使う
  std::ostringstream ans;
  // 2で割ったあまりの数字を文字として扱い、文字列に追加していく
  while(input >= 1) {
    ans << input % 2;
    input /= 2;
  }
  // 右に追加していったので、反転させる
  std::string ans_str = ans.str();
  std::reverse(ans_str.begin(), ans_str.end());

  //文字数カウント
  int c = ans_str.length() ;
  //連続する0の数
  int z = 0;
  //末尾から0探して消す
  while(c>0){
  ans_str.find_last_of('0');
  z++;
  ans_str.pop_back();
  }
  std::cout << z;
  return 0;
}
