#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int A[] = {2, 1, 8, 2, 6, 4, 5, 7, 7, 9}; // dizi tanımlandı
    n = sizeof(A)/sizeof(A[0]); // dizinin boyutu alınıyor.
    int dp[n+1];
    dp[0] = 0;
    for(int i=1;i<=n;i++)
    {
        int maxi = 0;
        for(int j=1; j<=i; j++)
        {
            if(A[j]<A[i]) maxi = max(maxi, dp[j]);
        }
        dp[i] = maxi + 1; // bulunan maxi değeri ekleniyor.
    }
    for(int i=1;i<n;i++)
    {
        cout << dp[i] << " "; // dizi elemanları yazdırılıyor.
    }
    cout << endl;
}