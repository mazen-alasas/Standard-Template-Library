#include <iostream>
#include <set>
using namespace std;
int main()
{
/** ٍSet
    >> Always sorted
    >> unique keys
    >> time complexity O(log n)
**/
    set<int>s{1,8,1,1,5,4,6,3,3,2};
    for(auto i : s)
        cout<<i<<' ';       /// 1 2 3 4 5 6 8
    cout<<endl;
    cout<<s.size()<<'\n';    /// 7

/// add element
    s.insert(7),s.insert(7);
    for(auto i : s)
        cout<<i<<' ';       /// 1 2 3 4 5 6 7 8
    cout<<endl;
    cout<<s.size()<<'\n';    /// 8

/// remove element
    s.erase(2),s.erase(4);
    for(auto i : s)
        cout<<i<<' ';       /// 1 3 5 6 7 8
    cout<<endl;
    cout<<s.size()<<'\n';    /// 6

/// .count(n) return frequency of n if n is not exists return 0
    cout<<s.count(98)<<' '<<s.count(5)<<'\n';
///            0                 1

    set<int>s1;
    for(int i=0;i<5;i++){
        int r; cin>>r;
        s1.insert(r);
    }
    for(auto i : s1)
        cout<<i<<' ';
    cout<<endl;

/// to sorted set descending
    set<int,greater<int>>s2{7,8,2,4,5,1,11,12};
    for(auto i : s2)
        cout<<i<<' ';       /// 12 11 8 7 5 4 2 1
    cout<<endl;

    multiset<int>ms{7,85,4,5,2,9,4,6,1,1,2};    /// sorted but accept repetition
    for(auto i : ms)
        cout<<i<<' ';       /// 1 1 2 2 4 4 5 6 7 9 85
    cout<<endl;
    cout<<ms.count(4)<<' '<<ms.count(1)<<' '<<ms.count(3)<<'\n';
///         2                   2                 0

    return 0;
}
