#include <iostream>
#include <stdlib.h>
using namespace std;

//Deklarasi variable
const float phi1 = 3.14;
const float phi2 = 22/7;
bool stop = true;
int pilih, radius, tinggi, panjang, lebar, rusuk, alas, sisi, atas, diagonal1, diagonal2;
float volume;
float luas;

//Deklarasi tampilan
void tampilanAwal();
void tampilan2d();
void tampilan3d();

//Deklarasi bangun datar
void persegi(int s);
void persegiPanjang(int p, int l);
void segiTiga(int a, int t);
void trapesium(int a1, int a2, int t);
void jajarGenjang(int a, int t);
void belahKetupat(int d1, int d2);
void layanglayang(int d1, int d2);
void lingkaran(int r);

//Dekrarasi bangun ruang
void kubus(int s);
void balok(int p, int l, int t);
void tabung(int r, int t);
void prismaSegitiga(int s, int t, int p);
void krucut(int r, int t);
void bola(int r);

//fungsi tampilan
void tampilanAwal(){
    system("cls");
    cout<<"<<<!!!-------------Selamat Datang--------!!!>>>"<<endl;
    cout<<"   =======Bangun Datar & Bangun Ruang======"<<endl;
    cout<<"[1] Bangun Datar"<<endl;
    cout<<"[2] Bangun Ruang"<<endl;
    cout<<"[3] Keluar"<<endl;
    cout<<"pilih: ";
    cin>>pilih;
    cout<<"-----------------------------------------------"<<endl;
    system("cls");
    switch(pilih){
        case 1:
        tampilan2d();
        break;
        case 2:
        tampilan3d();
        break;
        case 3:
        stop = false;
        cout<<"Keluar dari program...."<<endl;
        break;
        default:
        cout<<"Pilihan anda invalid"<<endl;
        break;
    }
}
void tampilan2d(){
    system("cls");
    cout<<"<<<!!!-----------Menghitung Luas Bangun Datar-----------!!!>>>"<<endl;
    cout<<"[1] Persegi"<<endl;
    cout<<"[2] Persegi Panjang"<<endl;
    cout<<"[3] Segitiga"<<endl;
    cout<<"[4] Trapesium"<<endl;
    cout<<"[5] Jajar Genjang"<<endl;
    cout<<"[6] Layang-layang"<<endl;
    cout<<"[7] Belah Ketupat"<<endl;
    cout<<"[8] Lingkaran"<<endl;
    cout<<"[9] Kembali ke Menu Utama"<<endl;
    cout<<"Pilih: ";
    cin>>pilih;
    system("cls");
    switch(pilih){
        case 1:
        persegi(sisi);
        break;
        case 2:
        persegiPanjang(panjang, lebar);
        break;
        case 3:
        segiTiga(alas, tinggi);
        break;
        case 4:
        trapesium(atas, alas, tinggi);
        break;
        case 5:
        jajarGenjang(alas, tinggi);
        break;
        case 6:
        layanglayang(diagonal1, diagonal2);
        break;
        case 7:
        belahKetupat(diagonal1, diagonal2);
        break;
        case 8:
        lingkaran(radius);
        break;
        case 9:
        tampilanAwal;
        break;
        default:
        cout<<"Pilihan Anda tidak valid"<<endl;
        break;
    }
    cout<<"---------------------------------------------------------------"<<endl;
}
void tampilan3d(){
    system("cls");
    cout<<"<<<!!!----------Menghitung Volume Bangun Ruang----------!!!>>>"<<endl;
    cout<<"[1] Kubus"<<endl;
    cout<<"[2] Balok"<<endl;
    cout<<"[3] Tabung"<<endl;
    cout<<"[4] Prisma Segitiga"<<endl;
    cout<<"[5] Kerucut"<<endl;
    cout<<"[6] Bola"<<endl;
    cout<<"[7] Kembali ke Menu Utama"<<endl;
    cout<<"Pilih: ";
    cin>>pilih;
    cout<<"---------------------------------------------------------------"<<endl;
    system("cls");
    switch(pilih){
        case 1:
        kubus(sisi);
        break;
        case 2: 
        balok(panjang, lebar, tinggi);
        break;
        case 3:
        tabung(radius, tinggi);
        break;
        case 4: 
        prismaSegitiga(alas, tinggi, panjang);
        break;
        case 5:
        krucut(radius, tinggi);
        break;
        case 6: 
        bola(radius);
        break;
        case 7:
        tampilanAwal();
        break;
        default:
        cout<<"Pilihan Anda tidak valid"<<endl;
        break;
    }
}

//fungsi bangun datar
void persegi(int s){
    cout<<"<<<!!!=====Menghitung Luas Persegi=====!!!>>>"<<endl;
    cout<<"sisi: ";
    cin>>sisi;
    luas = sisi*sisi;
    cout<<"luasnya adalah "<<luas<<endl;
    system("pause");
    cout<<"=============================================="<<endl;
}
void persegiPanjang(int p, int l){
    cout<<"<<<!!!=====Menghitung Luas Persegi Panjang========!!!>>>"<<endl;
    cout<<"panjang: ";
    cin>>panjang;
    cout<<"lebar: ";
    cin>>lebar;
    luas = panjang*lebar;
    cout<<"luasnya adalah "<<luas<<endl;
    system("pause");
    cout<<"======================================================="<<endl;
}
void segiTiga(int a, int t){
    cout<<"<<<!!!=====Menghitung Luas Segitiga=====!!!>>>"<<endl;
    cout<<"alas: ";
    cin>>alas;
    cout<<"tinggi: ";
    cin>>tinggi;
    luas = 0.5*alas*tinggi;
    cout<<"luasnya adalah "<<luas<<endl;
    system("pause");
    cout<<"=============================================="<<endl;
}
void trapesium(int a1, int a2, int t){
    cout<<"<<<!!!=====Menghitung Luas Trapesium=====!!!>>>"<<endl;
    cout<<"sisi atas: ";
    cin>>atas;
    cout<<"sisi bawah: ";
    cin>>alas;
    cout<<"tinggi: ";
    cin>>tinggi;
    luas = 0.5*(atas+alas)*tinggi;
    cout<<"luasnya adalah "<<luas<<endl;
    system("pause");
    cout<<"================================================"<<endl;
}
void jajarGenjang(int a, int t){
    cout<<"<<<!!!=====Menghitung Luas Jajar Genjang=====!!!>>>"<<endl;
    cout<<"alas: ";
    cin>>alas;
    cout<<"tinggi: ";
    cin>>tinggi;
    luas = alas*tinggi/2;
    cout<<"luasnya adalah "<<luas<<endl;
    system("pause");
    cout<<"=================================================="<<endl;
}
void belahKetupat(int d1, int d2){
    cout<<"<<<!!!=====Menghitung Luas Belah Ketupat=====!!!>>>"<<endl;
    cout<<"diagonal 1: ";
    cin>>diagonal1;
    cout<<"diagonal 2: ";
    cin>>diagonal2;
    luas = diagonal1*diagonal2*0.5;
    cout<<"luasnya adalah "<<luas<<endl;
    system("pause");
    cout<<"=================================================="<<endl;
}
void layanglayang(int d1, int d2){
    cout<<"<<<!!!=====Menghitung Luas Layang-layang=====!!!>>>"<<endl;
    cout<<"diagonal 1: ";
    cin>>diagonal1;
    cout<<"diagonal 2: ";
    cin>>diagonal2;
    luas = diagonal1*diagonal2*0.5;
    cout<<"luasnya adalah "<<luas<<endl;
    system("pause");
    cout<<"===================================================="<<endl;
}
void lingkaran(int r){
    cout<<"<<<!!!=====Menghitung Luas Lingkaran=====!!!>>>"<<endl;
    cout<<"Pilih nilai phi:"<<endl;
    cout<<"[1] phi = 3.14"<<endl;
    cout<<"[2] phi = 22/7"<<endl;
    cout<<"Pilihan: ";
    cin>>pilih;

    switch(pilih){
        case 1:
        cout<<"radius: ";
        cin>>radius;
        luas = phi1*radius*radius;
        cout<<"luasnya adalah "<<luas<<endl;
        break;
        case 2:
        cout<<"radius: ";
        cin>>radius;
        luas = phi2*radius*radius;
        cout<<"luasnya adalah "<<luas<<endl;
        break;
        default:
        cout<<"Pilihan Anda tidak valid"<<endl;
        break;
    }
    cout<<"==============================================="<<endl;    
    system("pause");
}
//fungsi bangun ruang
void tabung(int r, int t){
    cout<<"<<<!!!=====Menghitung Volume Tabung=====!!!>>>"<<endl;
    cout<<"Pilih nilai phi:"<<endl;
    cout<<"[1] phi = 3.14"<<endl;
    cout<<"[2] phi = 22/7"<<endl;
    cout<<"Pilihan: "<<endl;
    cin>>pilih;

    switch(pilih){
        case 1:
        cout<<"tinggi: ";
        cin>>tinggi;
        cout<<"radius: ";
        cin>>radius;
        volume = phi1*radius*radius*tinggi;
        cout<<"volumenya adalah "<<volume<<endl;
        break;
        case 2:
        cout<<"tinggi: ";
        cin>>tinggi;
        cout<<"radius: ";
        cin>>radius;
        volume = phi2*radius*radius*tinggi;
        cout<<"volumenya adalah "<<volume<<endl;
        break;
        default:
        cout<<"Pilihan Anda tidak valid"<<endl;
        break;
    }
    cout<<"========================================"<<endl;
    system("pause");
}
void balok(int p, int l, int t){
    cout<<"<<<!!!======Menghitung Volume Balok======!!!>>>"<<endl;
    cout<<"panjang: ";
    cin>>panjang;
    cout<<"lebar: ";
    cin>>lebar;
    cout<<"tinggi: ";
    cin>>tinggi;
    volume = panjang*lebar*tinggi;
    cout<<"volumenya adalah "<<volume<<endl;
    cout<<"==============================================="<<endl;
    system("pause");
}
void kubus(int s){
    cout<<"<<<!!!======Menghitung Volume Kubus======"<<endl;
    cout<<"rusuk: ";
    cin>>rusuk;
    volume = rusuk*rusuk*rusuk;
    cout<<"Volumenya adalah "<<volume<<endl;
    cout<<"========================================="<<endl;
    system("pause");
}
void bola(int r){
    cout<<"<<<!!!======Menghitung Volume Bola======!!!>>>"<<endl;
    cout<<"Pilih nilai phi: "<<endl;
    cout<<"[1] phi = 3.14"<<endl;
    cout<<"[2] phi = 22/7"<<endl;
    cout<<"Pilihan: ";
    cin>>pilih;

    switch(pilih){
        case 1:
        cout<<"radius: ";
        cin>>radius;
        volume = 4*phi1*radius*radius*radius/3;
        cout<<"Volumenya adalah "<<volume<<endl;
        break;
        case 2:
        cout<<"radius: ";
        cin>>radius;
        volume = 4*phi2*radius*radius*radius/3;
        cout<<"Volumenya adalah "<<volume<<endl;
        break;
        default:
        cout<<"Pilihan Anda tidak valid"<<endl;
        break;
    }
    cout<<"=================================================="<<endl;
    system("pause");
}
void krucut(int r, int t){
    cout<<"<<<!!!======Menghitung Volume Krucut======!!!>>>"<<endl;
    cout<<"Pilih nilai phi: "<<endl;
    cout<<"[1] phi = 3.14"<<endl;
    cout<<"[2] phi = 22/7"<<endl;
    cout<<"Pilihan: ";
    cin>>pilih;

    switch(pilih){
        case 1:
        cout<<"radius: ";
        cin>>radius;
        cout<<"tinggi: ";
        cin>>tinggi;
        volume = phi1*1/3*radius*radius*tinggi;
        cout<<"Volumenya adalah "<<volume<<endl;
        break;
        case 2:
        cout<<"radius: ";
        cin>>radius;
        cout<<"tinggi: ";
        cin>>tinggi;
        volume = phi2*1/3*radius*radius*tinggi;
        cout<<"Volumenya adalah "<<volume<<endl;
    }
    cout<<"============================================"<<endl;
    system("pause");
}
void prismaSegitiga(int a, int t, int p){
    cout<<"<<<!!!======Menghitung Volume Prisma Segitiga======!!!>>>"<<endl;
    cout<<"tinggi: ";
    cin>>tinggi;
    cout<<"alas: ";
    cin>>alas;
    cout<<"panjang: ";
    cin>>panjang;
    volume = 0.5*alas*tinggi*panjang;
    cout<<"volumenya adalah "<<volume<<endl;
    cout<<"========================================================"<<endl;
    system("pause");
}
int main(){
    while(stop == true){
        tampilanAwal();
    }
    
    return 0;
}
