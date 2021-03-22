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

   // freopen("ride.in", "r", stdin);
   //freopen("ride.out", "w", stdout);

    int n, b, h, w, p;
    while (cin >> n >> b >> h >> w)
    {
        vector<int> price;
        bool flag=false;
        while (h--)
        {
            cin >> p;


            int beds;
            int i = 0;
            for (; i < w; i++)
            {
                cin >> beds;
                if (beds >= n)
                {
                    if (n * p <= b)
                    {
                        flag = true;
                        price.push_back(n * p);
                    }
                }
            }
        }
       // printVec(price);
        if (flag)    cout << *min_element(price.begin(),price.end()) << endl;
        else cout << "stay home" << endl;
    }
    cout << "\b \b";
}
