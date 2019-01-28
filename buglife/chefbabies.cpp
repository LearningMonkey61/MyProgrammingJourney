#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
int main(void)
{
    vector<pair <lli,lli>> vecta ,vectb;
    vector<lli> veca,vecb;
    int t;
    lli m ;
    int op;
    scanf("%d",&t);
    while(t--)
    {
        cin>>m;

        lli a[2*m],b[2*m];

        for (int i = 0 ; i < 2*m ; i++)
        {
            if( i < m )
            {
                scanf("%lld %lld",&a[i],&b[i]);
                vecta.push_back(make_pair(a[i],b[i]));
            }
            else 
            {
                scanf("%lld %lld",&a[i],&b[i]);
                vectb.push_back(make_pair(a[i],b[i]));
            }
        }


        for (int i = 0 ; i < m - 1 ; i++)
        {
            if (abs(vecta[i].first - vecta[i+1].first) >= abs(vecta[i].second - vecta[i+1].second))
            {
                op = abs(vecta[i].first - vecta[i+1].first);
            }
            else 
            {
                op = abs(vecta[i].second - vecta[i+1].second) ;
            }
            veca.push_back(op);
        }
        

        for (int i = 0 ; i < m - 1 ; i++)
        {
            if (abs(vectb[i].first - vectb[i+1].first) >= abs(vectb[i].second - vectb[i+1].second))
            {
                op = abs(vectb[i].first - vectb[i+1].first);
            }
            else 
            {
                op = abs(vectb[i].second - vectb[i+1].second);
            }
            vecb.push_back(op);
        }

        sort(veca.begin(), veca.end());
        sort(vecb.begin(), vecb.end());

    if (veca == vecb)
    {
            cout << "YES" <<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    }
    
    return 0 ; 
}