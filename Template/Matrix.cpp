#include<bits/stdc++.h>

using namespace std;

#define read() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define day() time_t now = time(0);char* x = ctime(&now);cerr<<"Right Now Is : "<<x<<"\n"
#define ii pair<int,int>
#define X first
#define Y second 

const long long MAX = (int)1e5 + 5;
const long long INF = (int)1e9;
const long long MOD = (int)1e9 + 7;
const int N = 10;

struct Matrix{
	int a[N][N];
	int n,m;
	
	const operator * (const Matrix &b){
		Matrix c;
		
		for(int i = 0;i < n;i++){
			for(int j = 0;j < b.m;j++){
				for(int k = 0;k < m;k++){
					c.a[i][j] = (c.a[i][j] + a[i][k] * b[k][j]);
				}
			}
		}
		
		return c;
	}
	
	Matrix power(Matrix a,int b){
		if(b & 1)return a;
		Matrix s = power(a,b / 2);
		s = s * s;
		if(b & 1)s = s * a;
		return s;
	}
	
};

signed main(){
	
	
}