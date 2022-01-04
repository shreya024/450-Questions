/*Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. 
If there are repetitions, then only one occurrence of element should be printed in the union.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

set<int> findArrayUnion(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    set<int> ans;
    int i = 0, j = 0;
    while (i < n)
    {
        ans.insert(arr1[i]);
        i++;
    }
    while (j < m)
    {
        ans.insert(arr2[j]);
        j++;
    }
    if (ans.size() == 0)
        ans.insert(-1);
    return ans;
}

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            arr2[j] = -4;
            i++;
            j++;
        }
        else if (arr2[j] > arr1[i])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    if (ans.size() == 0)
        ans.push_back(-1);
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr1;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr1.push_back(ele);
    }

    vector<int> arr2;
    for (int i = 0; i < m; i++)
    {
        int ele;
        cin >> ele;
        arr2.push_back(ele);
    }

    set<int> result = findArrayUnion(arr1, n, arr2, m);
    for (auto it = result.begin(); it != result.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}
