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

void solve()
{
    int n;
    cin>>n;
    vector<pii> customers(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        customers[i]={a,b};
    }
    
    sort(customers.begin(),customers.end());
    multiset<int> leavingTime;
    int maxi=0;
    for(int i=0;i<n;i++){
        int start=customers[i].first;
        int end=customers[i].second;
        auto it=leavingTime.upper_bound(start);
        if(it!=leavingTime.begin()){
            leavingTime.erase(--it);
            leavingTime.insert(end);
        }else{
            leavingTime.insert(end);
            maxi++;
        }
    }
    cout<<maxi<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}