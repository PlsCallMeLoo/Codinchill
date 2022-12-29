#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	


	 int h;
    cin >> h; cin.ignore();
    int w;
    cin >> w; cin.ignore();

	for (int i = 0; i < w; ++i)
	{
		cout << "#";
	}

	cout << endl;

    for (int i = 0; i < h - 2; ++i)
    {
    	cout << '#';
    	for (int i = 0; i < w - 2; ++i)
    	{
    		cout << ' ';
    	}
    	 cout << '#' << endl;
    }


    cout << '#';

    for (int i = 0; i < ((w - 1) / 2 ) - 1; ++i)
    {
    	cout << ' ';
    }

    cout << "#";

    for (int i = 0; i < ((w - 1) / 2 ) - 1; ++i)
    {
    	cout << ' ';
    }

    
    cout << '#';

}


	