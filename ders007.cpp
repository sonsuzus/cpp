/* en uzun kurallara uyan dizi. kural ise ardışık olmasa bile a[i]<a[j] i<j serisi */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    int A[] = {2, 1, 8, 9, 6, 4, 5, 7, 3, 19}; // dizi tanımlandı bu dizi için sonuç {1, 1, 2, 3, 2, ,2 ,3, 4, 2, 5} şeklinde olacak
    n = sizeof(A)/sizeof(A[0]); // dizinin boyutu alınıyor.
    int dp[n+1] = {0}; // dizi tanımlanıyor ve ilk eleman 0 olarak atanıyor.
    for(int i=0;i<n;i++)
    {
        for(int j=i; j>=0; j--)
        {
            if(A[j]<A[i]) // eğer A[j] < A[i] ise
            {
                dp[i] = max(dp[i], dp[j]+1); // dp[i] ve dp[j]+1 karşılaştırılıyor.
                
            }
        }
        
        cout << dp[i]+1 << " "; // dizi elemanları yazdırılıyor.
    }
}