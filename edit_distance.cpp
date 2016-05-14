#include <iostream>
#include <string>
#include <algorithm>

using std::string;

int edit_distance(const string &str1, const string &str2) {
  int length1 = str1.size();
  int length2 = str2.size();
  int a[length1 + 1][length2 + 1];
  for (int i = 0; i < length1 + 1; i++)
  {
	  a[i][0] = i;
  }
  for (int j = 0; j < length2 + 1; j++)
  {
	  a[0][j] = j;
  }
  for (int i = 1; i < length1 + 1; i++)
  {
	  for (int j = 1; j < length2 + 1; j++)
	  {
		  using std::min;
		  int di_1j_1;
		  /*a(i,j) = min of the following expressions:
		     1 a(i,j - 1) + 1
			 2 a(i - 1,j) + 1
			 3 if str1(i) == str2(j) then a(i - 1,j - 1); else: a(i - 1,j - 1) + 1
		  */
		  if (str1[i - 1] != str2[j - 1])
		  {
			  di_1j_1 = a[i - 1][j - 1] + 1;
		  }
		  else
		  {
			  di_1j_1 = a[i - 1][j - 1];
		  }
		  a[i][j] = min(di_1j_1,min(a[i][j - 1] + 1, a[i - 1][j] + 1));
	  }
  }
  return a[length1][length2];
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
