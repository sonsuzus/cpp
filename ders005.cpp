#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // para alınıyor
    int dp[n+1]; //para kadar dizi tanımlanıyor
    int C[] = {1,3,4}; // banknotlar tanımlandı
    dp[0] = 0; //ilk değeri 0
    for(int i=1;i<=n;i++)
    {
        int mini=n+1; // büyük bir değer giriliyor
        for(int c:C) // C içinde dolaşıyor, python gibi
        {
            if(n>=c)  mini = min(mini,dp[i-c]);             // bütün değerler arasında paraya en uzak yol hesaplanıyor.
        }
        dp[i] = mini +1; // bulunan mini değeri ekleniyor.
    }
    cout<<dp[n]<<endl;
}