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
    cin >> x; cin.ignore();

    std::vector<std::vector<int>> v;

    for (int i = 1; i != x - 1; ++i)
    {
        int a = i;
        int b = x - i; 

        std::vector<int> aa;
        aa.push_back(a);
        aa.push_back(b);

        v.push_back(aa);
    }

    std::vector<int> sum;

    for (int i = 0; i < v.size(); ++i)
    {
        int a = v[i][0] * v[i][0] * v[i][1];
        sum.push_back(a);
    }




    cout << *max_element(sum.begin(), sum.end()) << endl;

    std::cout << v[std::distance(sum.begin(),std::max_element(sum.begin(), sum.end()))][0];
    std::cout << " " << v[std::distance(sum.begin(),std::max_element(sum.begin(), sum.end()))][1];

}