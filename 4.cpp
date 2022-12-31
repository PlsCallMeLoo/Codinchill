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
bool a;
    std::vector<int> v;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x; cin.ignore();
        a = 1;

        for (int i = 2; i < x; ++i)
        {
        	if (x % i == 0)
        	{
        		a = 0;
        	}

        	if(a)
        	{
        		v.push_back(x);
        	}
        }
    }

    cout << *max_element(v.begin(), v.end());
	

}


