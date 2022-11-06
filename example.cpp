#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

#define ll long long
#define PI 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second

const ll inf = 1e18;

//struct custom_hash {
//	static uint64_t splitmix64(uint64_t x) {
//		x += 0x9e3779b97f4a7c15;
//		x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//		x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//		return x ^ (x >> 31);
//	}
//
//	size_t operator()(uint64_t x) const {
//		static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
//		return splitmix64(x + FIXED_RANDOM);
//	}
//	// unordered_map<int,pair<int,int>,custom_hash> mp;
//};


/****************** TOPOLOGICAL SORTING ****************/
// vector<vector<int>> adj; vector<int> indegree; queue<int> q;
// cycle detection (directed or undirected)
// indegree

// Extension -> strongly connected components(kosaraju algo);
/****************** ******************* ****************/


/*-----------------------------------*/
ll power(ll x, ll y){if (y < 0)return 1;ll res = 1;x = x % mod;while (y){if (y & 1)res = (res * x) % mod;x = (x * x) % mod;y >>= 1;}return res;}
int gcd(int a, int b){if (a == 0) return b; return gcd(b % a, a); }
vector<int> divisors(int n){ vector<int> ans; for (int i = 1; i * i <= n; i++){ if (n % i == 0){ if (n / i == i) ans.push_back(i); else{ ans.push_back(i); ans.push_back(n / i);}}}return ans;}
bool isPrime (int n){if (n <= 1) return false; for (int i = 2; i * i <= n; i++) if (n % i == 0) return false; return true;}
/*-----------------------------------*/


/*-------------- COMBINATION ---------------*/
// int fct[N];
// void factorial(){
// 	fct[0] = 1;
// 	for (int i = 1; i < N; i++) fct[i] = (fct[i-1] * i) %mod;
// }
// only when mod > n
// int nCr(int n, int r) { return (n < r || r < 0) ? 0 : ((fct[n] * power(fct[r],mod-2))%mod * power(fct[n - r], mod-2))%mod; }
/*-------------- ----------- ---------------*/


/****************** Fermat's little Theorem ****************/
// (only when m is prime)(inverse modulo)
// int mod_inv(int a, int m) { return power(a, m-2); }
/****************** *********************** ****************/


// time complexity = O( n*log(log(n)) )
// vector<int> primeSieve(int n){
//	 vector<int> prime(n+1,1);
//	 prime[0] = prime[1] = 0;
//	 for (int i = 2; i*i <=n; i++){
//		 if(prime[i]==1){
//			 for (int j = i*i; j <= n; j += i)
//				 prime[j]=0;   
//		 }
//	 }
//	 return prime;
// }

// O(n*n!)
// vector<string> permutations(string str){
//	 vector<string> arr;
//	 do{
//		 arr.pb(str);
//	 }while(next_permutation(str.begin(), str.end()));
//	 return arr;
// }


/****************  SEGMENT TREE  ****************/
// vector<int> arr;
// int seg[4*N];
// void build(int ind, int low, int high){ // o(2n-1)
//     if(low == high){
//         seg[ind] = arr[low];
//         return;
//     }

//     int mid = (low + high)/2;
//     build(2*ind+1, low, mid);
//     build(2*ind+2, mid+1,high);

//     seg[ind] = seg[2*ind+1] + seg[2*ind+2];
// }

// int query(int ind, int low, int high, int l, int r){   // o(logn)
//     if(low >= l && high <= r)
//         return seg[ind];
//     if(high < l || low > r)
//         return 0;
    
//     int mid = (low + high)/2;
//     int first = query(2*ind+1, low , mid, l, r);
//     int second = query(2*ind+2, mid+1,high, l, r);
//     return first + second;
// }

// void update(int ind, int low, int high, int index, int val)   //o(logn)
// {
//     if (low == high)
//     {
//         arr[index] = val;
//         seg[ind] = val;
//         return;
//     }

//     int mid = (low + high) / 2;
//     if (index <= mid)
//         update(2 * ind + 1,low, mid, index, val);
//     else
//         update(2 * ind + 2,mid+1, high, index, val);
//     seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
// }
/****************  *************  ****************/


// question reading mistake (mathematics one) - Avoid my boi;
// observe generally (for all cases).
// take care of negative numbers.
// you concept should be tough.(no hawabaazi)

void solve(){
    



}

int main()
{
    fastio();
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    
    int T;cin>>T;
    int t=1;
    while(t <= T){
        //cout<<"Case #"<<t<<": ";
        solve();
        t++;
    }
    return 0;
}

// back iteration, prefix ans suffix, GCD and LCM, Binary Search, dp, redefinition, Two pointer
// if there is no fix value we can consider range.
// Opposite case can be consider (O-X graph)
// a+b = a^b + 2*(a&b) 
// a+b = a|b + a&b

// vector.size() returns unsigned int (or unsigned long int) so remember to add ll if u are subtracting anything from it..
// eg v.size() - 2(wrong if v.size() is 0) better use v.size() - 2ll or (int)v.size() - 2;
// signed +- unsigned = unsigned (if both of same preference)
// signed/unsigned +- (upper range data type) = upper range data type manipulation
// size_t = unsigned int or unsigned long long int depending on the architecture.(32bit or 64bit)
