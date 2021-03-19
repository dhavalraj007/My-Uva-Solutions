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
    char c;
    bool first = true;
    while(scanf("%c",&c)!=EOF)
    {
        if(c=='"')
        {
            if(first)
                printf("``");
            else
                printf("''");
            first=!first;
        }
        else
        printf("%c",c);
            
    }
    
    
}
