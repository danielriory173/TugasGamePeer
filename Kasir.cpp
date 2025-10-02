#include <iostream>
using namespace std;

const int MAX_ITEMS = 100;

// Function ini berfungsi untuk mecatat barang
void catatBarang(string &nama, int &jumlah, double &harga){
    cout << "Masukan nama barang: ";
    getline(cin, nama);
    cout << "Masukan jumlah barang: ";
    cin >> jumlah;
    cout << "Masukan harga barang: ";
    cin >> harga;
    cin.ignore(); // Membersihkan newline character dari buffer
}    

void cetakStruk(const string nama[], const int jumlah[], const double harga[], int banyakBarang){
    double total = 0;
    cout << "\n ----- Struk Belanja ----- \n";
    for int(i = 0; i < banyakBarang; i++){
        double subtotal = jumlah[i] * harga[i];
        cout << nama[i] << " x" << jumlah[i] << "@" << harga[i] << " = " << subtotal << endl;
        total += subtotal;
    }
}

int main(){
    cout << "Hello, World! saya suka C++" << endl;
    cout << "Emg iyah? - Daniel" << endl;
    return 0; 
}