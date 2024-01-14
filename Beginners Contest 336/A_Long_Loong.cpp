#include <iostream>
#include <vector>
using namespace std;

int main(){
  std::string o = "";
	int N;
	cin >> N ;

  while(N>0){
    o.insert(o.end(), 'o');
    //o.push_back('o');
    N--;
  }
	cout << "L" << o << "ng" << endl;
	return 0;
}

