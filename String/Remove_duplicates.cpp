/*You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"
*/
#include <bits/stdc++.h>
using namespace std;

bool isDuplicate(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            return true;
        }
    }
    return false;
}
string removeDuplicates(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            s.erase(s.begin() + i - 1, s.begin() + i + 1);
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    bool remove = isDuplicate(s);
    while (remove)
    {
        s = removeDuplicates(s);
        remove = isDuplicate(s);
    }
    cout << s;
    return 0;
}