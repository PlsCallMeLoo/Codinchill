#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   	#if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	 int a;
    cin >> a; cin.ignore();
    int b;
    cin >> b; cin.ignore();
    int c;
    cin >> c; cin.ignore();


   string ans = ((a * 4 * 7 * 24 ) > b + c) ? "true" : "false";

   cout << ans;
}