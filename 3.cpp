#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   	#if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
    cin >> n; cin.ignore();
    string water;
    cin >> water; cin.ignore();

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < i; ++j)
    	{
    		cout << " ";
    	}

    	cout << water << endl;
    }

}


