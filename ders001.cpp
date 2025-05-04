#include <bits/stdc++.h>

int n, a[500005],tmp[500005]; // a dizisi ve geçici dizi
long long cevap = 0; // ters sıralama sayısı
void merge_sort(int sol, int sag){
    if (sol == sag) return;
    int orta = (sol + sag) / 2;
    merge_sort(sol, orta); // sol diziyi sıralama
    merge_sort(orta + 1, sag); // sağ diziyi sıralama
    int p1 = sol, p2 = orta + 1, index = 0; // sol ve sağ diziler için iki işaretçi
    while (p1 <= orta && p2 <= sag) { // iki diziyi karşılaştırma
        if (a[p1] <= a[p2]) {
            tmp[++index] = a[p1++]; // küçük olanı geçici diziye ekle, 1 den başlaması için ++index, a nın değerini ekleyip bir arttırıyor
            cevap += p2-(orta + 1); // ters sıralama sayısını artır
        } else {
            tmp[++index] = a[p2++]; // küçük olanı geçici diziye ekle
        }
    }
    while (p1 <= orta) {
        cevap += p2-(orta + 1); // ters sıralama sayısını artır
        tmp[++index] = a[p1++]; // sol dizinin kalanını ekle
    } 
    while (p2 <= sag) tmp[++index] = a[p2++]; // sağ dizinin kalanını ekle
    for(int i = sol; i<=sag; i++) { // geçici diziyi ana diziye kopyala
        a[i] = tmp[i - sol + 1]; // geçici dizinin elemanlarını ana diziye kopyala
    }
}

int main()
{
    scanf("%d", &n); // dizi boyutunu oku
    for(int i = 0; i < n; i++) { // dizi elemanlarını oku
        scanf("%d", &a[i]);
    }
    merge_sort(0,n-1); // merge sort fonksiyonunu çağır
    printf("%lld\n", cevap); // ters sıralama sayısını yazdır   
    return 0;
}

/* ders adı algortmalar */
/* merge sort incele - zaman karmaşıklığı konusu O(N log2 (n))
merge ile ilgili gnelede katman sayısı çıkar, işlem sayısı çıkmaz deniyor. 
inversion terim var incele. i, j ikililerine istiyor a[i]>a[j] olacak i<j olacak 
merge sort kullanarak daha kolay ve daha hızlı oluyor inversion bulmak için*/