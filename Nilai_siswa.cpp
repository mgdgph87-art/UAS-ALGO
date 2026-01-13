#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
struct S { string n; double v; char g; };
int main() {
    vector<S> d; int p; string n; double v;
    while (cout << "\n1.Tambah Nilai 2.Tampilkan 3.Stat 4.Keluar\nPilih: " 
           && cin >> p && p != 4) {
        if (p == 1) {
            cout << "Nama: "; cin.ignore(); getline(cin, n);
            cout << "Nilai: "; cin >> v;
            if (v >= 0 && v <= 100) 
                d.push_back({n, v, "EEEDCBAA"[(int)v/15+1]});
        } else if (d.empty()) cout << "Kosong!";
        else if (p == 2) for (int i=0; i<d.size(); i++)
            cout << i+1 << ". " << d[i].n << " | " << d[i].v << " | " << d[i].g << endl;
        else if (p == 3) {
            double h=d[0].v, o=d[0].v, t=0;
            for (auto& s : d) { t+=s.v; h=max(h,s.v); o=min(o,s.v); }
            cout << "Rata: " << fixed << setprecision(2) << t/d.size() 
                 << "\nMax: " << h << "\nMin: " << o << endl;
        }
    }
    cout << "Selesai."; return 0;
}