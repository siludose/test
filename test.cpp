#include<iostream>
#include<algorithm>
#include<cstdio>
#pragma warning(disable:4996)
using namespace std;
#define maxn 1010
#define ll long long
ll a[maxn];
int n;
int main()
{
	freopen("input.txt","r",stdin);
	while(~scanf("%d",&n))
	{
		ll sum=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(n==1)
		{
			printf("%.6lf",sum*1.0);
		}
		else if(n==2)
		{
			printf("%.6lf",sum*0.5);
		}
		else
		{
			ll ans=0;ll sum1=a[1]+a[n];
			ans+=(n-1)*(n-2)*sum;
			for(int i=2;i<n;i++)
			{
				ans+=a[0]*(n-2)*(n-i)+a[n]*(n-2)*(n-i)+(n-i)*(n-i-1)*(sum-sum1)/((n-2)*1.0);
			}
			double res=ans*1.0/(n*(n-1)*(n-2));
			printf("%.6lf\n",res);	
		}		
	}	
	return 0;
}
