#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	

	int width;
    int height;
    cin >> width >> height; cin.ignore();

    std::vector<std::vector<char>> v;

    for (int i = 0; i < height; ++i)
    {
    	std::vector<char> a (width, '.');	
    	v.push_back(a);
    }
    int x_1;
    int y_1;
    cin >> x_1 >> y_1; cin.ignore();
    int x_2;
    int y_2;
    cin >> x_2 >> y_2; cin.ignore();

    int rWith = x_2 - x_1 + 1;
    int rHeigh = y_2 - y_1 + 1;


    for (int i = y_1; i <= y_2 ; ++i)
    {
    	v[i][x_1] = '#';
    	v[i][x_2] = '#';
    }

    for (int i = x_1; i < rWith - 1 + x_1; ++i)
    {
    	v[y_1][i] = '#';
    }

     for (int i = x_1; i < rWith - 1 + x_1; ++i)
    {
    	v[y_2][i] = '#';
    }

    for (int i = 0; i < height; i++)
    {
    	for (char a : v[i])
    	{
    		cout << a;
    	}

    	cout << endl;
      
    }
}


	