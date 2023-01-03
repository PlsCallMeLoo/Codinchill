#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   	#if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int c;
    cin >> c; cin.ignore();
    int n;
    cin >> n; cin.ignore();

    float a = c;

    for (int i = 0; i < n; ++i)
    {
    	a += a * 0.1;
    }

    cout << round(a);
}


	