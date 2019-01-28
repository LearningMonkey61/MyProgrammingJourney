#include<bits/stdc++.h>
bool checkprime(int n) 
{ 
    if (n <= 1) 
         return false;  
    for (int i=2; i<n; i++) 
        {
            if (n%i == 0) 
                return false; 
        }
    return true; 
} 
using namespace std ; 
int main (void)
{
   int n ; 
   int count ;
   cin >> n ;
   vector <int> count(n,0) ;
   for (int i = 0; i < n ; i++ )
   {
       for(int j = 0; j < n ; j++ )
       {
           if (checkprime((i*n)+j))
           {
               int num = i*n  +j ;
               count[num] += 1;
               count[num] += 1;
               count[num] += 1;
               count[num] += 1;
               count[num] += 1;
               count[num] += 1;
               count[num] += 1;
               count[num] += 1;
               count[num] += 1;
                
           } 
       }
   }

}
