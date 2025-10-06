#include <iostream>
using namespace std;

const int MAX_ITEMS = 100;

void availableItems(string items[], int jumlahItem[], double harga[]) {
    items[0] = "Mie Indomie";
    harga[0] = 3000;
    
    items[1] = "Tepung terigu";
    harga[1] = 9000;

    items[2] = "Telur 1Kg";
    harga[2] = 22000;

    items[3] = "Gula";
    harga[3] = 16000;

    items[4] = "Garam";
    harga[4] = 10000;

    items[5] = "Kopi";
    harga[5] = 15000;

    items[6] = "Beras 5Kg";
    harga[6] = 150000;

    items[7] = "Galon";
    harga[7] = 20000;

    items[8] = "Minyak 1L";
    harga[8] = 20000;

//fungsi buat input barangnya
    for (int i = 0; i < 9; i++) {
        cout << "Masukan jumlah " << items[i] << ": ";
        cin >> jumlahItem[i];
    }

}

//fungsi buat hitung totalnya
double hitungTotal(int jumlahItem[], double harga[],int x){
        double total = 0;
        for (int i=0; i<x; i++){
            total = total + (jumlahItem[i]*harga[i]);
        }
            return total;
    }

    //fungsi buat masukin uang pembayaran
    double pembayaran (double bayar, double total, double kembalian){
    cout<<"Masukkan jumlah uang pembayaran : ";
    cin>>bayar;

    if(bayar<total){
        cout<<"Maaf uang anda tidak mencukupi, silakan masukkan lagi";
    }
    if(bayar>total){
        kembalian = bayar - total;
        cout<<"Uang kembalian anda sebesar Rp "<<kembalian;
    }
    if(bayar==total){
        cout<<"Selamat pembayaran anda berhasil!!!";
    }
    return bayar-total;
}

int main(){

    cout<<endl;
    cout<<"List Daftar Barang Belanjaan yang Tersedia : "<<endl;
    cout<<"1. Indomie           = Rp 3.000"<<endl;
    cout<<"2. Tepung Terigu     = Rp 9.000"<<endl;
    cout<<"3. Telur 1 Kg        = Rp 22.000"<<endl;
    cout<<"4. Gula              = Rp 16.000"<<endl;
    cout<<"5. Garam             = Rp 10.000"<<endl;
    cout<<"6. Kopi              = Rp 15.000"<<endl;
    cout<<"7. Beras 5 Kg        = Rp 150.000"<<endl;
    cout<<"8. Galon             = Rp 20.000"<<endl;
    cout<<"9. Minyak 1 L        = Rp 20.000"<<endl;
    cout<<endl;

    string items[ MAX_ITEMS];
    int jumlahItem[ MAX_ITEMS];
    double harga[ MAX_ITEMS];
    availableItems(items,jumlahItem,harga);
    double total = hitungTotal(jumlahItem,harga,9);

    cout<<endl;
    cout<<"Total Bayar = Rp "<<total;
    cout<<endl;

    double kembalian;
    double bayar = pembayaran(bayar,total,kembalian);
    
    return 0; 
}
