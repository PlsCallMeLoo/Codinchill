#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string c;
    getline(cin, c);
    int l;
    cin >> l; cin.ignore();

    if(l % 2)
    {
        int aa = (l - 1) / 2;

        for (int i = 0; i < aa; ++i)
        {
            cout << '*';
        }

        cout << c;

        for (int i = 0; i < aa; ++i)
        {
            cout << '*';
        }
    }
    else
    {
        cout << "CAN'T";
    }
    
}


	