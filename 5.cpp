#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	 string first;
    getline(cin, first);
    string second;
    getline(cin, second);

    cout << first;

    for (int i = first.size(); i < second.size(); ++i)
    {
    	cout << second[i];
    }

}


	