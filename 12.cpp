#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
    
    int x;
    int y;
    cin >> x >> y; cin.ignore();

    std::vector<string> v;

    for (int i = 0; i < 5; ++i)
    {
        v.push_back(".....");
    }

    for (int i = 0; i < 5; ++i)
    {
        v[i][x] = '|';
    }

    v[y] = "-----";    
    v[y][x] = '+';

    for (int i = 0; i < 5; ++i)
    {
        cout << v[i] << endl;
    }

  return 0;
}


	