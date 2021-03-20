#include<iostream>
#include<string>
#include<iomanip>
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define log(a)  cout<<a<<endl;
#define isEven(a) (!(a&1))
#define isOdd(a)  (a&1)
#define ll long long 

using namespace std;

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
   int t;
   cin>>t;
   while(t--)
   {
       long long n,m,sonars;
       cin>>n>>m;
       n-=2;
       m-=2;
     //  cout<<n<<m;
       sonars= n/3 + (n%3?1:0);
      // cout<<sonars<<endl;
       sonars*= m/3 + (m%3?1:0);
       cout<<sonars<<endl;
   }
}
