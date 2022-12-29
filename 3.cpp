#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    string seq;
    getline(cin, seq);

    int first = stoi(seq.substr(1, seq.find(',')  ));
    seq.erase(0, seq.find(',') + 2);
    int sec = stoi(seq.substr(0, seq.find(',')));
    seq.erase(0, seq.find('[') + 1);
    int last = stoi(seq.substr(0, seq.size() - 1));

    cout << first + ((sec - first) * last);

}
    



	