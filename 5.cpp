#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;

float ii(int i)
{
	return ((float) i * (float)9 / 5) + 32;
}

int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	 int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) 
    {
        int b;
        int t;
        cin >> b >> t; cin.ignore();

        t = ii(t);

        if(t == b)
        {
        		cout << "same" << endl;
        }
        else if(b > t)
        {
        		cout << "higher" << endl;
        }
        else
        {
        		cout << "Lower" << endl;
        }
    }
}


	