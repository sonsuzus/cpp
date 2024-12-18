#include <bits/stdc++.h>

using namespace std;

#define int long long

int n,fib[100005],fac[100005];

const int mod=1000000007;

int add(int x,int y){
	if(x+y>=mod)return x+y-mod;
	return x+y;
}

int mul(int x,int y){
	return ((x%mod)*(y%mod))%mod;
}

int fp(int x,int y){
	if(y==0)return 1;
	if(y==1)return x;
	int q=fp(x,y/2);
	q=mul(q,q);
	if(y%2==1) q=mul(q,x);
	return q;
}

int fp_iteratif(int x,int y){
	int sonuc=1;
	for(int i=62;i>=0;i--){
		sonuc=mul(sonuc,sonuc);
		if(((1ll<<i)&y)!=0) sonuc=mul(sonuc,x);
	}
	return sonuc;
}

int32_t main(){
	
	cout<<fp_iteratif(10,10)<<endl;
	return 0;
}
