#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define Log(a)  cout<<a<<endl;
#define sz(v) (int)(v).size()
#define isPsqrt(a) ( (a) == (long long)sqrt(a) * (long long)sqrt(a))
#define isEven(a) (!(a&1))
#define isOdd(a)  (a&1)
#define deb(x) cout<<#x<<" "<< x<<endl
#define deba(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long 

using namespace std;

template<typename T>
void printVec(const vector<T> &v)
{
    for (int i=0;i<v.size();i++)
    {
        deba(i,v[i]);
    }
}

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}


long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}



int main()
{

//    freopen("ride.in", "r", stdin);
  // freopen("ride.out", "w", stdout);


    int t;
    cin >> t;
    int c=0;
    FOR(T,1,t+1)
    {
        int n, a, prev = 0;
        int high, low;
        high = low = 0;
        cin >> n;
        cin >> prev;
        FOR(i, 1, n)
        {
            cin >> a;
            if ( a > prev)  high++;
            else if (a < prev)    low++;
            prev = a;
        }
        cout << "Case " << T << ": " << high << " " << low<<endl;
    }
}
