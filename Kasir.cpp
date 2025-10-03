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


    for (int i = 0; i < 9; i++) {
        cout << "Masukan jumlah " << items[i] << ": ";
        cin >> jumlahItem[i];
    }

}

int main(){






    
    return 0; 
}
