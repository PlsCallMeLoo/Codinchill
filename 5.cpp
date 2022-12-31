#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   	#if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	
	    int x_1;
    int y_1;
    cin >> x_1 >> y_1; cin.ignore();
    int x_2;
    int y_2;
    cin >> x_2 >> y_2; cin.ignore();

    int m = (y_1 - y_2) / (x_1 - x_2);

    int b = y_1 - (x_1 * m);

    cout << m << "*x+" << b;

}


