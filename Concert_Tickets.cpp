#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <bitset>
#include <iomanip>
#include <numeric>
#include <climits>
#include <cassert>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

template <typename T>
void input(vector<T> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int solve()
{
    int n,m;
    cin>>n>>m;
    multiset<int> tickets;
    for(int i=0;i<n;i++){
        int price;
        cin>>price;
        tickets.insert(price);
    }

    for(int i=0;i<m;i++){
        int budget;
        cin>>budget;
        auto it = tickets.upper_bound(budget);
        if(it==tickets.begin()){
            cout<<-1<<"\n";
        }else{
            --it;
            cout<<*it<<"\n";
            tickets.erase(it);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}