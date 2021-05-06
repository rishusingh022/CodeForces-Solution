#include<iostream>
#include<cstring>
#include<map>
#include<set>
using namespace std;
#define long long int
int OrdinaryCount(int a){
    set<int> s;
    while(a>0){
        int temp=a%10;
        s.insert(temp);
        a=a/10;
    }
    if(s.size()==1){
        return 1;
    }
    else{
        return 0;
    }
}
int solve(const int n)
{
    int base = 1;
    int result = 0;
    int target = 9;

    for (int i = 10; i <= n; i *= 10)
    {
        target = i - 1;

        result += target / base;

        base = base * 10 + 1;
    }

    result += n / base;

    return result;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int result = solve(n);
       cout << result << "\n";
    }
    return 0;
}