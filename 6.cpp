#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	 int t;
    int c;
    int r;
    cin >> t >> c >> r; cin.ignore();

    string ans = "";

    ans += (t > (c * r)) ? "yes" : "no";
    cout << ans;

}


	