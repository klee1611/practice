#include <sstream>
#include <iostream>

using namespace std;

int main(){
  stringstream ss;
  int num = 922098;
  string str;
  string fstr = "3.1415926";
  float fnum;

  // write number of type int to stringstream
  ss << num;
  // write from stringstream to string
  ss >> str;
  cout << "str: " << str << endl;

  // only clear eof of the stringstream
  ss.clear();
  ss << num;
  cout << "use ss.clear() only, ss: " << ss.str() << endl;

  // clean stringstream completely
  ss.str(""); // eof will be put
  ss.clear(); // only clear eof, other data will stay

  ss << fstr;
  ss >> fnum;
  cout << "fnum: " << fnum << endl;
  
  return 0;
}
