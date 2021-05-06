#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll sum=n*n;
		ll arr[n][n];
		ll odd=1;
		ll even=2;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{	if(odd<=sum)
				{
				arr[i][j]=odd;
				odd+=2;
				}
				else
				{
					arr[i][j]=even;
					even=even+2;
				}
				
			}
		}
	
		int counter=0;
		
			for(ll i=1;i<n-1;i++)
		{
			for(ll j=1;j<n-1;j++)
			{		
				ll up=max(arr[i-1][j],arr[i][j])-min(arr[i-1][j],arr[i][j]);
				ll down=max(arr[i+1][j],arr[i][j])-min(arr[i+1][j],arr[i][j]);
				
				
				ll right=max(arr[i][j+1],arr[i][j])-min(arr[i][j+1],arr[i][j]);
				ll left=max(arr[i][j-1],arr[i][j])-min(arr[i][j],arr[i][j-1]);
				if(up<=1 || left<=1 || right<=1 || down<=1)
				{
					counter=1;
					cout<<"-1"<<endl;
					break;
				}
				
				
			}
		}
		if(n==2)
		{
			cout<<"-1"<<endl;
			counter=1;
		}
		if(counter==0)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<arr[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		
		
	}
}    
