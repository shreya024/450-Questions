#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    getline(cin, st);
    int n = st.length();

    int count = 0;
    bool first_space = true;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st[i] != ' ' && first_space)
        {
            count++;
        }

        else
        {
            first_space = false;
            break;
        }
    }

    cout << count;

    return 0;
}
