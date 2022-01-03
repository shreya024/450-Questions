#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> s;
    s = {'M', 'y', ' ', 'n', 'a', 'm', 'e', ' ', 'i', 's', ' ', 'L', 'o', 'v', 'e'};
    string word;
    vector<char> res;

    for (int i = 0; i <= s.size(); i++)
    {

        if (s[i] == ' ' || i == s.size())
        {
            reverse(word.begin(), word.end());
            copy(word.begin(), word.end(), back_inserter(res));
            res.push_back(' ');
            word.clear();
        }
        else
        {
            word.push_back(s[i]);
        }
    }
    s = res;
    for (int i = 0; i < s.size(); i++)
        cout << s[i];
    return 0;
}