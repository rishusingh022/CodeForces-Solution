#include<iostream>
#include<map>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        long long count=0;
        map<long long,long long> mp;
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            arr[i]=arr[i]-(i+1);
            mp[arr[i]]++;
        }
        for(auto ele:mp){
            count+=(ele.second*(ele.second-1))/2;
        }
        cout<<count<<endl;
    }
    return 0;
}