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

    int sum = 0;

    for (int i = 2; i <= n; i +=2)
    {
        sum += i;
    }

    cout << sum;


}