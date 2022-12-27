#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    std::vector<string> v;
	string s;

    getline(cin, s);
    s += ", ";

    for (int i = 0; i < s.size(); ++i)
    {
        v.push_back(s.substr(0, s.find(',')));
        s.erase(0, s.find(',') + 2);
    }

    int n; // The amount of items you will dig through.
    cin >> n; cin.ignore();

    for (int i = 0; i < n; i++) 
    {
        string item;
        getline(cin, item);

        if(count(v.begin(), v.end(), item))
        {
            cout << "YOINK";    
        }
        else
        {
            cout << "YEET";
        }
    }

    
}


	