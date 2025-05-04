#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, toplam =0,papatya=0, maxtoplam=0;
    cin >> n;
    vector<tuple<int, int, int>> hamleler(n);
    for(int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        hamleler[i] = make_tuple(x, y, z);
    }
    // Veriyi okuduktan sonra istediğiniz işlemleri yapabilirsiniz.
    // Örneğin, okunan hamleleri ekrana yazdıralım:
    for(papatya=1; papatya <= 3; papatya++) {
        toplam = 0;
        for (const auto& hamle : hamleler) {
            if (get<0>(hamle) == papatya) {
                papatya = get<1>(hamle);
            }
            else if (get<1>(hamle) == papatya) {
                papatya = get<0>(hamle);
            }
            
            
            if (get<2>(hamle) == papatya) {
                toplam++;
            }

            cout << get<0>(hamle) << " " << get<1>(hamle) << " " << get<2>(hamle) << endl;
        if (toplam > maxtoplam) {
                maxtoplam = toplam;
            }
        }
    }
    cout << maxtoplam << endl;
    return 0;
}