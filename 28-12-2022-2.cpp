#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


    int m;
    cin >> m; cin.ignore();
    for (int i = 0; i < m; i++) 
    {
        int n;
        cin >> n; cin.ignore();
        n *= !(n % 2) ? 2 : 3;
      	cout << n << endl;
    }
}