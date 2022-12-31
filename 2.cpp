#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string num;
    cin >> num; cin.ignore();
    int sum = 1;


    for (char a: num)
    {
    	sum *= a - '0';
    }

cout << sum;


}


	