/**
 *    author:  iamkhairulhasan
**/
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve()
{
    vector<int> vec;
    int ara[10] = {8, 7, -1, -2, 3, 4, 5, 6, 9, 10};
    int sorted[10];

    // O(n)
    int startIdx = 0;
    int endIdx = 9;
    for (int i = 9; i > -1; i--)
    {
        int left = ara[startIdx];
        int right = ara[endIdx];
        left = abs(left);
        right = abs(right);

        if (left > right)
        {
            sorted[i] = left * left;
            startIdx++;
        }
        else
        {
            sorted[i] = right * right;
            endIdx--;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << sorted[i] << " ";
    }

    cout << endl;

    // O(nlogn)
    for(int i = 0; i < 10 ; i++){
      int absolute = abs(ara[i]);
    vec.push_back(absolute * absolute);
    }
    sort(vec.begin(), vec.end());
    for (auto it = vec.begin(); it != vec.end(); it++)
     cout << *it << " ";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        solve();
    return 0;
}