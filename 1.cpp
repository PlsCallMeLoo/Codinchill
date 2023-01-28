#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    string t;
    getline(cin, t);
    string t2;
    getline(cin, t2);

    for (int i = 0; i < t2.size(); ++i)
    {
        if(t[i] == '1')
        {
            cout << t[i];
            continue;
        }

        if(t2[i] == '1')
        {
            cout << '1';
        }
        else
        {
            cout << '0';
        }
    }
}


	