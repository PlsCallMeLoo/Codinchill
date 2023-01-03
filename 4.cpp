#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;

struct cat
{
	std::string name;
	int birth, death;
};

int main()
{
   	#if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	 int year;
    cin >> year; cin.ignore();


  // leap year if perfectly divisible by 400
  if (year % 400 == 0) {
        cout << "true";

  }
  // not a leap year if divisible by 100
  // but not divisible by 400
  else if (year % 100 == 0) {
        cout << "true";

  }
  // leap year if not divisible by 100
  // but divisible by 4
  else if (year % 4 == 0) {
        cout << "true";

  }
  // all other years are not leap years
  else {
        cout << "false";

  }


}


	