#include<iostream>
using namespace std;

int main(){

    float jumlah = 0;
    float diskon;
    string barang;
    int i;

    //input jumlah barang 
    int y;
    cout<<"Masukkan Jumlah Barang: ";
    cin>>y;
    int arr[y];
    cout<<endl;

    //input nama barang (1 kata aja)
    for(int s = 1; s <= y; s++){
    string barang;
    cout<<"Masukkan Nama Barang "<< s<< ": ";
    cin>>barang;

    }     cout<<endl;

    //input harga barang(bisa pake koma)
    for(int i = 1; i <= y; i++){
    float arr[i];
    cout<<"Masukkan Harga Barang "<< i<< ": ";
    cin>> arr[i];

    //total harga
    jumlah = jumlah + arr[i];

    } cout<<endl;

    cout<<"Total harga belanja anda adalah : "<<jumlah<<endl;

    cout<<"=========================================";
    cout<<endl;

    //diskon harga

    if(jumlah<50000 and jumlah>=25000){
        cout<<"Selamat, Anda mendapat diskon sebesar 5%";
    diskon = jumlah*95/100;
    }

    if(jumlah>=50000 and jumlah<75000){
        cout<<"Selamat, Anda mendapat diskon sebesar 10%";
    diskon = jumlah*90/100;
    }

    if(jumlah>=75000 and jumlah<100000){
        cout<<"Selamat, Anda mendapat diskon sebesar 20%";
    diskon = jumlah*80/100;
    }

    if(jumlah>=100000){
        cout<<"Selamat, Anda mendapat diskon sebesar 30%";
    diskon = jumlah*70/100;
    }
    cout<<endl;
    cout<<endl;

    //struk belanja

    // cout<<"Total harga belanja anda adalah : "<<jumlah;

    cout<<"Jadi, Total yang harus anda bayarkan adalah : "<<diskon;

    cout<<endl;
    cout<<"============================================="<<endl;

    float bayar;
    float kembalian;
    cout<<"Masukkan jumlah yang yang akan anda bayarkan : ";
    cin>>bayar;

    if(bayar<diskon){
        cout<<"Maaf bangett, Uang anda tidak mencukupi";
        cout<<endl<<endl;

        if(bayar<diskon){
            cout<<"Silakan masukkan lagi : ";
             cin>>bayar;
        }
    }
    if(bayar==diskon){
        cout<<"Pembayaran Selesai!!!";
    }
    if(bayar>diskon){
        kembalian = bayar - diskon;
        cout<<"Uang kembalian kamu sebesar : "<<kembalian;
    }

    cout<<endl;

    return 0;

}