/* inversion bulmakla ilgili konu 
ağaç olarak yap hepsini 0 la
kendi solunda kendinden büyük kaç eleman var hesapla
cevabı o kadar arttır
ağacı güncelle*/

/* Örnek soru: bir dizide iki eleman seçildiği zaman solda kalan sağda kalan elemandan büyükse
oluşan ikiliye şanslı ikili denir. */

/* [10,20,3,4,7,8,4,3,5] dizisinde kaç şanslı ikili vardır*/

/* en az ne kadar zaman karmaşıklığı ile şanslı ikililer bulunur*/

/* segment tree ile yapılacak (araştır)*/

#include <bits/stdc++.h>
using namespace std;
int tree[4000005]; // segment tree için dizi tanımla
int query(int node, int start, int end, int l,int r)
{
    if (start>end || start>r || end<l) return 0; // aralık dışındaysa 0 döndür
    if (start>=l && end<=r) return tree[node]; // aralık içindeyse değeri döndür
    int mid = (start + end) / 2; // orta noktayı bul
    return query(node*2, start, mid, l, r) + query(node*2+1, mid+1, end, l, r); // sol ve sağ çocuğun toplamını döndür
}

void update(int node, int start, int end, int x)
{
    if (start>end || start>x || end<x) return; // x aralığında değilse geri dön
    if (start == x && end == x) { // x aralığında ise güncelle
        tree[node]++; // x elemanını bir arttır
        return;
    }
    int mid = (start + end) / 2; // orta noktayı bul
    update(node*2, start, mid, x); // sol çocuğu güncelle
    update(node*2+1, mid+1, end, x); // sağ çocuğu güncelle
    tree[node] = tree[node*2] + tree[node*2+1]; // güncellenen değerleri topla

}

int main(){
    int n;
    scanf("%d", &n); // dizi boyutunu oku
    int a[n+2];
    int b[n+2];
    for(int i = 0; i < n; i++) { // dizi elemanlarını oku
        scanf("%d", &a[i]);
        b[i] = a[i]; // b dizisine a dizisinin elemanlarını kopyala
    }
    sort(b+1, b+n+1); // b dizisini sıralı hale getir
    int cevap = 0; // şanslı ikili sayısını tutacak değişken
    for(int i = 0; i < n; i++) { // dizi elemanlarını gez
        cevap += query(1, 1, n, a[i]+1, n); // şanslı ikili sayısını güncelle
        update(1, 1, n, a[i]); // segment tree'yi güncelle
    }
    cout << cevap << endl; // şanslı ikili sayısını yazdır
    return 0; // programı sonlandır
}