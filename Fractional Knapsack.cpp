#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

bool mycompare(pair<int, int> a, pair<int, int> b)
{
    float a1 = (float)a.first / a.second;
    float b1 = (float)b.first / b.second;
    return a1 > b1;
}

void print(vector<pair<int, int>> &items)
{
    for (auto p : items)
    {
        cout << p.first << "   " << p.second << endl;
    }
}
int main()
{
    int s, n;
    cin >> n >> s;
    vector<pair<int, int>> items;
    while (n--)
    {
        int sz, value;
        cin >> value>> sz;
        pair<int, int> a(value, sz);
        items.push_back(a);
    }

    sort(items.begin(), items.end(), mycompare);

    int currsize = 0;
    double maxvalue = 0.0;
    for (auto p : items)
    {
        if (currsize + p.second <= s)
        {
            maxvalue += p.first;
            currsize += p.second;
        }

        else
        {
            if(currsize != s)
            {
                int sizereq = s-currsize;
                maxvalue += sizereq*((float)p.first/p.second);
                currsize = s;
            }
        }
    }

    cout <<fixed<<setprecision(1)<< maxvalue << endl;
}
