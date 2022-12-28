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

   	std::vector<int> v;

   	string xx = "";
    
    for (int i = 0; i < n; i++)
    {
        string input;
        
        getline(cin, input);
        string ans = input;

        for (int i = 0; isblank(input[0]) ; ++i)
        {
        	v.push_back(stoi(input.substr(0, input.find(' '))));
			input.erase(0, input.find(' ') + 1);
        }
		
		if(accumulate(v.begin(), v.end(), 0) % 2 == 0)
		{
			xx += ans + " ";
		}
		v.clear();
    }

    cout << xx;
}


	