#include<iostream>
#include<string>
#include<iomanip>
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define Log(a)  cout<<(a)<<endl;
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
  //she has to return to her car
   int t;
   cin>>t;
   while(t--)
   {
       int stores;
       cin>>stores;
       int min=99;
       int max = 0;
       FOR(i,0,stores)
       {
           int s;
           cin>>s;
           if(s<=min)
           min=s;
           if(s>=max)
           max=s;
       }
       Log(2*(max-min));
   }
}
