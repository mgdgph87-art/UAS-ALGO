#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
struct K { string n; int s; };
int main() {
    int n, p, t=0, w=0; vector<K> d;
    cout << "Jumlah kandidat: "; cin >> n;
    for (int i=0; i<n; i++) {
        string k; cout << "Nama " << i+1 << ": ";
        cin.ignore(1000,'\n'); getline(cin, k); d.push_back({k, 0});
    }
    while (cout << "\nPilih (0=Hasil): " && cin >> p && p != 0)
        if (p>0 && p<=n) d[p-1].s++;
    cout << "\n" << left << setw(20) << "Kandidat" << "Suara\n";
    for (int i=0; i<n; i++) {
        cout << setw(20) << d[i].n << d[i].s << endl;
        t += d[i].s; if (d[i].s > d[w].s) w = i;
    }
    if (t > 0) cout << "Total: " << t << "\nMENANG: " << d[w].n;
    return 0;
}