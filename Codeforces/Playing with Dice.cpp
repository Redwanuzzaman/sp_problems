#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, f = 0, d = 0, s = 0;
    cin >> a >> b;
    for(int i = 1; i <= 6; i++)
    {
        if(abs(a-i) < abs(b-i)) f++;
        else if(abs(a-i) == abs(b-i)) d++;
        else s++;
    }
    cout << f << " " << d << " " << s << endl;
}
