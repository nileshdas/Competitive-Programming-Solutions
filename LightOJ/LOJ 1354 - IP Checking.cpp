#Name Sofen Hoque Anonta  #Problm
#include bitsstdc++.h
using namespace std;

FOLD ME
namespace{
typedef long long LL;
typedef vectorint vint;
typedef pairint,int pint;
typedef unsigned long long ULL;

Macros
int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL coutendl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout #x_n;DA(x_.begin(), x_.end());
#define DD(x_) cout( ++CC_ ) #x_ x_endl;
#define SS printf(_LOOOOOK@MEEEEEEEEEEEEEEE( %d )n,++CC_);
#define EXT(st_) coutnExicution Time (double)(clock()-st_)CLOCKS_PER_SECendl;
#define DM(MT,n_,m_)pf(Matrix %sn   , #MT);for(int i_= 0;i_m_;i_++)pf(%4d , i_);NL;NL;for(int r_=0;r_n_;r_++){pf(%2d , r_);for(int c_= 0;c_m_;c_++)pf(%4d , MT[r_][c_]);NL}
#define mem(a_,b_)(a_, b_, sizeof(a_));


constants
const double EPS= 1E-9;
const double PI= 2acos(0.0);
const long long MOD= 1000000007;

template class Tvoid DA(T i,T e){while(i!=e){coutCon( ++CC_ ) i++endl;}}
template class Tvoid DA(T x, int l){for(int i=0; il;i++)cout[i] x[i]endl;}
template class Tinline void sary(T st, T nd){while(stnd)cinst++;sf(%d, st++);}
template class Tvoid tobin(T n,charbin){int pos= 1((int)log2(n));while(pos=1){if((n & pos)==0)bin='0';elsebin='1';pos=1;bin++;}bin='0';}
template class Tinline T LCM(T x,T y){return((xy)__gcd(x,y));}
LL todec(string& num, int b){LL dec=num[0]-(isupper(num[0]) 'A'-10 '0');for(int i=1;num[i];i++){if(num[i]='A'&& num[i]='Z')num[i]-='A'-10;else num[i]-='0';dec= b;dec+= num[i];}return dec;}
LL bigMod(LL x, LL y, LL m){if(y == 0) return 1;LL p= bigMod(x, y2, m)%m;p= (pp)%m;return ((y&1) (xp)%m p);}
ULL ncr(int n, int k){ULL res= 1;if(kn-k)k= n-k;for(int i=0; ik; i++){res = n-i;res = i+1;}return res;}
int phi(int n){int ret= n;for(int i= 2; ii = n; i++){if(n % i == 0){while(n%i == 0){n = i;}ret -= reti;}}if(n  1) ret -= retn;return ret;}
int egcd(int a, int b, int& x, int& y){if(a == 0){x= 0;y= 1;return b;}int x1, y1;int gcd= egcd(b%a, a, x1, y1);x= y1 - (ba)  x1;y= x1;return gcd;}
bool comp(const int a,const int b){return ab;}
}

const int sss= 1E6;


void solve(void){
    int Tc;
    int n;
    string bb;
    
    cinTc;
    LL a, b,c,d;
    for(int Case= 1; Case=Tc; Case++)
    {
        cina;
        cin.ignore();
        cinb;
        cin.ignore();
        cinc;
        cin.ignore();
        cind;
        cin.ignore();
        
        bool q,w,e,r;
        
        getline(cin, bb,'.');
        DD(bb)
        q= a == todec(bb, 2);
        getline(cin, bb,'.');
        DD(bb)
        w= b == todec(bb, 2);
        getline(cin, bb,'.');
        DD(bb)
        e= c == todec(bb, 2);
        getline(cin, bb);
        DD(bb)
        r= d == todec(bb, 2);
        
        coutCase   Case    ((q&w&e&r) Yes  No) endl;
    }

}



int main(void){
    ios_basesync_with_stdio(false);
    cin.tie(NULL);
    freopen(Dinput.txt, r, stdin);
    solve();
    
    return 0;
}
