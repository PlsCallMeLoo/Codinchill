#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	 int count;
    cin >> count; cin.ignore();
    for (int i = 0; i < count; i++) {
        int n;
        cin >> n; cin.ignore();
        cout << '[';
        char a = (n % 2 == 0) ? ' ' : 'x';
        cout << a;
        cout << "] " << n << endl;
    }
}


	