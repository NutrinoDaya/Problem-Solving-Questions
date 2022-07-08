//C++ Program to Compare Two Strings
#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
  int result;
  result = strcmp(str1, str2);
    cout << "Comparing The First And The Second string = " <<result << endl;
  result = strcmp(str1, str3);
    cout << "Comparing The First And The 3rd string = " <<result << endl;

  return 0;
}