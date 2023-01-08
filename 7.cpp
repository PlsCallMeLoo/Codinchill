#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !01
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	    int n;
    cin >> n; cin.ignore();
  	while(!(n % 2))
  	{
  		n /= 2;
  	}

  	cout << n; 
}



	