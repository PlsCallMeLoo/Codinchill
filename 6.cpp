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

    string a;
    cin >> a; cin.ignore();
    string b;
    cin >> b; cin.ignore();
    int l;
    cin >> l; cin.ignore();
    float prog;
    cin >> prog; cin.ignore();

    int aa = ceil(prog * l);
    int bb = l - aa;

    for (int i = 0; i < aa; ++i)
    {
        cout << a;
    }

    for (int i = 0; i < bb; ++i)
    {
        cout << b;
    }

	 
}


	