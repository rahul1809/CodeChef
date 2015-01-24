#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif
//Shorthands
#define MOD 1000000007
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<=k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) for (int i=0 ; i<=j ; i+=1)
#define RREP(i, j)for (int i=j ; i>=0 ; i-=1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (typeof(l.begin()) it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
// typedefs
using namespace std;
//Generic fast inputs
template <class T>
inline T read()
{
    T n=0;
    bool sign=0;
    char p=gc();
    if(p=='-')
        sign=1;
    while((p<'0'||p>'9')&&p!=EOF&&p!='-')
        p=gc();
    if(p=='-')
        sign=1,p=gc();
    while(p>='0'&&p<='9') {
        n = (n<< 3) + (n<< 1) + (p - '0');
        p=gc();
    }
    if(sign)
        return -n;
    return n;
}
inline void readStr(char *str)
{
    register char c=0;
    register int i = 0;
    while (c < 33)
        c = gc();
    while (c > 65)
    {
        str[i] = c;
        c = gc();
        i = i + 1;
    }
 
    str[i] = '\0';
}
//Generic fast output function
template <class T> inline void write(T x)
{
    int i = 20;
    char buf[21];
    // buf[10] = 0;
    buf[20] = '\n';
 
    do
    {
        buf[--i] = x % 10 + '0';
        x/= 10;
    }while(x);
    do
    {
        putchar(buf[i]);
    } while (buf[i++] != '\n');
}
long int pow2(int x,int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else if(n&1)
        return  x*pow2(x*x,(n-1)/2);
    else
        return pow2(x*x,n/2);
 
}
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
   // cout<<pow2(2,10)<<endl;
  //  cout<<pow2(2,0)<<endl;;
 //   cout<<pow2(2,1)<<endl;;
 //   cout<<pow2(10,9)<<endl;;
 
      int t;
    t=read<int>();
    char str[100001];
    FOR(i,0,t-1,1)
    {
 
        scanf("%s",str);
        int l=1;
        unsigned long long int ans=1;
        while(str[l-1]!='\0')
        {
            if(l&1)
            {
                if(str[l-1]=='l')
                ans=(ans<<1)%MOD;
                else
                ans=((ans<<1)+2)%MOD;
 
            }
            else
            {
                if(str[l-1]=='l')
                ans=((ans<<1)-1)%MOD;
                else
                ans=((ans<<1)+1)%MOD;
 
            }
            ++l;
        }
       write<unsigned long long int>(ans);
    }
    return 0;
}