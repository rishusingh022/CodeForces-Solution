#include<iostream>
#include<cstring>
#include<map>
using namespace std;
void removedublicate(char b[]){
    int l=strlen(b);
    if(l==0 or l==1){
        cout<<"YES"<<endl;
        return;
    }
    int prev=0;
    for(int current=1;current<l;current++){
        if(b[prev]!=b[current]){
            prev++;
            b[prev]=b[current];
        }
    }
    b[prev+1]='\0';

    int size=strlen(b);
    map<char,int> mp;
    bool flag=false;
    for(int i=0;i<size;i++){
        mp[b[i]]++;
        if(mp[b[i]]>1){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char b[n];
        cin>>b;
        removedublicate(b);
    }
    return 0;
}