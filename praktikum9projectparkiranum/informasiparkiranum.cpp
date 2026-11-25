#include <iostream>
using namespace std;

int gerbangsemarang = 12;
int rektorat = 100;
int basement = 0;
int b12 = 32;

int kgerbangsemarang = 100;
int krektorat = 100;
int kbasement = 200;
int kb12 = 50;

int parkir = gerbangsemarang + rektorat + basement + b12;
int totalkapasitas = kgerbangsemarang + krektorat + kbasement + kb12;
int slotkosong = totalkapasitas - parkir;

void masuksemarang();
void masukrektorat();
void masukbasement();
void masukb12();
void keluarsemarang();
void keluarrektorat();
void keluarbasement();
void keluarb12();
void info();

void masuk() {
    int p;

    do {
        cout << "1. Parkiran Gerbang Semarang " << endl;
        cout << "2. Parkiran Rektorat " << endl;
        cout << "3. Parkiran Basement Rektorat " << endl;
        cout << "4. Parkiran B12 " << endl;
        cout << "0. Kembali" << endl << endl;
        cout << "Pilih : ";
        cin >> p;
        cout << endl << endl;
        switch (p) {
            case 1: masuksemarang(); break;
            case 2: masukrektorat(); break;
            case 3: masukbasement(); break;
            case 4: masukb12(); break;
            case 0: return;
            default: cout << "_____________PILIHAN TIDAK VALID !!!!!___________" << endl << endl;break;
        }
    } while (p != 0);
    return ;
}

void masuksemarang() {
    int p;
    do {
    cout << "_______________PARKIRAN GERBANG SEMARANG_______________" << endl << endl;
    cout << "Kapasitas : " << kgerbangsemarang << endl;
    cout << "jumlah kendaraan saat ini : " << gerbangsemarang << endl << endl;
    cout << "1.Masuk" << endl;
    cout << "0.Kembali" << endl << endl;
    cout << "Pilih : ";
    cin >> p;
    cout << endl << endl;

    switch(p) {
        case 1 : if (gerbangsemarang >= kgerbangsemarang) {
            cout << "_____________PARKIRAN PENUH !!!!!!!_________________" << endl << endl;
            gerbangsemarang = 100;}
        else {cout << "___________MASUK PARKIRAN SEMARANG______________" << endl << endl;
            gerbangsemarang ++;}
            break;
        case 0 :return ; break; 
        default : cout << "_______PILIHAN TIDAK VALID !!!!_________" << endl << endl;
    };
    } while (p != 1 && p != 0);
    return;


}

void masukrektorat () {
    int p;
    
    do {
    cout << "_______________PARKIRAN REKTORAT_______________" << endl << endl;
    cout << "Kapasitas : " << krektorat << endl;
    cout << "jumlah kendaraan saat ini : " << rektorat << endl << endl;
    cout << "1.Masuk" << endl;
    cout << "0.Kembali" << endl << endl;
    cout << "Pilih : ";
    cin >> p;
    cout << endl << endl;

    switch(p) {
        case 1 :
        if (rektorat >= krektorat) {
            cout << "_____________PARKIRAN PENUH !!!!!!!_________________" << endl << endl;
            rektorat = 100;
        }
        else {cout << "___________MASUK PARKIRAN REKTORAT ______________" << endl << endl;
            rektorat ++;
        }
            break;
        case 0 : return ; break; 
        default : cout << "_______PILIHAN TIDAK VALID !!!!_________" << endl << endl;
    };
    }while (p != 0 && p != 1);
    return;
}

void masukbasement () {
    int p;
    do {
    cout << "_______________BASEMENT_______________" << endl << endl;
    cout << "Kapasitas : " << kbasement << endl;
    cout << "jumlah kendaraan saat ini : " << basement << endl << endl;
    cout << "1.Masuk" << endl;
    cout << "0.Kembali" << endl << endl;
    cout << "Pilih : ";
    cin >> p;
    cout << endl << endl;

    switch(p) {
        case 1 : 
        if (basement >= kbasement) {
            cout << "_____________PARKIRAN PENUH !!!!!!!_________________" << endl << endl;
            basement = 200;
        }else {
            cout << "___________MASUK PARKIRAN BASEMENT______________" << endl << endl;
            basement++;
        }
            break;
        case 0 :return ; break; 
        default : cout << "_______PILIHAN TIDAK VALID !!!!_________" << endl << endl;
    };
    } while (p != 1 && p != 0);
    return;
}

void masukb12 () {
    int p;
    do {
    cout << "_______________PARKIRAN B12_______________" << endl << endl;
    cout << "Kapasitas : 50" << endl;
    cout << "jumlah kendaraan saat ini : " << b12 << endl << endl;
    cout << "1.Masuk" << endl;
    cout << "0.Kembali" << endl << endl;
    cout << "Pilih : ";
    cin >> p;
    cout << endl << endl;

    switch(p) {
        case 1 : if (b12 >= kb12) {
            cout << "_____________PARKIRAN PENUH !!!!!!!_________________" << endl << endl;
            b12 = 50;
        }
        else {cout << "___________MASUK PARKIRAN B12______________" << endl << endl;
            gerbangsemarang ++;
        }
            break;
        case 0 :return ; break; 
        default : cout << "_______PILIHAN TIDAK VALID !!!!_________" << endl << endl;
    };
    } while (p != 1 && p != 0);
    return;
}

void keluar() {
    int p;
    
    do {
        cout << "1. Parkiran Gerbang Semarang " << endl;
        cout << "2. Parkiran Rektorat " << endl;
        cout << "3. Parkiran Basement Rektorat " << endl;
        cout << "4. Parkiran B12 " << endl;
        cout << "0. Kembali" << endl << endl;
        cout << "Pilih : ";
        cin >> p;
        cout << endl << endl;
        switch (p) {
            case 1: keluarsemarang(); break;
            case 2: keluarrektorat(); break;
            case 3: keluarbasement(); break;
            case 4: keluarb12(); break;
            case 0: return; break;
            default: cout << "_____________PILIHAN TIDAK VALID !!!!!___________" << endl << endl;
        }
    } while (p != 0);
    return;
}

void keluarsemarang() {
    int p;

    do {
    cout << "_______________GERBANG SEMARANG____________" << endl << endl;
    cout << "Kapasitas : 100" << endl;
    cout << "jumlah kendaraan saat ini : " << gerbangsemarang << endl << endl;
    cout << "1.keluar" << endl;
    cout << "0.Kembali" << endl << endl;
    cout << "Pilih : ";
    cin >> p;
    cout << endl << endl;  

    switch(p) {
        case 1 : if (gerbangsemarang == 0) {
            cout << "_____________TIDAK ADA KENDARAAN DISISNI !!!!_________________" << endl << endl;
            gerbangsemarang = 0;}
        else {cout << "___________KELUAR PARKIRAN SEMARANG______________" << endl << endl;
            gerbangsemarang --;}
            return;
            break;
        case 0 :return ; break; 
        default : cout << "_______PILIHAN TIDAK VALID !!!!_________" << endl << endl;
    };
    } while (p != 1 && p != 0);
    return ;
}

void keluarrektorat() {
    int p;

    do {
    cout << "_______________PARKIRAN REKTORAT____________" << endl << endl;
    cout << "Kapasitas : 100" << endl;
    cout << "jumlah kendaraan saat ini : " << rektorat << endl << endl;
    cout << "1.keluar" << endl;
    cout << "0.Kembali" << endl << endl;
    cout << "Pilih : ";
    cin >> p;
    cout << endl << endl;  

    switch(p) {
        case 1 : if (rektorat == 0) {
            cout << "_____________TIDAK ADA KENDARAAN DISISNI !!!!_________________" << endl << endl;
            rektorat = 0;}
            else {cout << "___________KELUAR PARKIRAN SEMARANG______________" << endl << endl;
            rektorat --;}
            return;
            break;
        case 0 :return ; break; 
        default : cout << "_______PILIHAN TIDAK VALID !!!!_________" << endl << endl;
    };
    } while (p != 1 && p != 0);
    return;
}

void keluarbasement() {
    int p;

    do {
    cout << "_______________BASEMENT____________" << endl << endl;
    cout << "Kapasitas : 200" << endl;
    cout << "jumlah kendaraan saat ini : " << basement << endl << endl;
    cout << "1.keluar" << endl;
    cout << "0.Kembali" << endl << endl;
    cout << "Pilih : ";
    cin >> p;
    cout << endl << endl;  

    switch(p) {
        case 1 : if (basement == 0) {
            cout << "_____________TIDAK ADA KENDARAAN DISISNI !!!!_________________" << endl << endl;
            basement = 0;}
            else {cout << "___________KELUAR PARKIRAN SEMARANG______________" << endl << endl;
            basement --;}
            return;
            break;
        case 0 :return ; break; 
        default : cout << "_______PILIHAN TIDAK VALID !!!!_________" << endl << endl;
    };
    } while (p != 1 && p != 0);
    return ;

}

void keluarb12() {
    int p;

    do {
    cout << "_______________PARKIRAN B12____________" << endl << endl;
    cout << "Kapasitas : 50" << endl;
    cout << "jumlah kendaraan saat ini : " << b12 << endl << endl;
    cout << "1.keluar" << endl;
    cout << "0.Kembali" << endl << endl;
    cout << "Pilih : ";
    cin >> p;
    cout << endl << endl;  

    switch(p) {
        case 1 : if (b12 == 0) {
            cout << "_____________TIDAK ADA KENDARAAN DISISNI !!!!_________________" << endl << endl;
            b12 = 0;}
            else {cout << "___________KELUAR PARKIRAN SEMARANG______________" << endl << endl;
            b12 --;}
            return;
            break;
        case 0 :return ; break; 
        default : cout << "_______PILIHAN TIDAK VALID !!!!_________" << endl << endl;
    };
    } while (p != 1 && p != 0);
    return ;
    }

void info () {
    int p;
    do {
    cout << "_____________INFO______________" << endl << endl;
    cout << "Parkiran Gerbang Semarang" << endl;
    cout << "Kapasitas : 100 " << endl;
    cout << "Jumlah Kendaraan Saat Ini : " << gerbangsemarang << endl;
    cout << "_______________________________" << endl;
    cout << "Parkiran Rektorat " << endl;
    cout << "Kapasitas : 100" << endl;
    cout << "Jumlah Kendaraan Saat Ini : " << rektorat << endl;
    cout << "_______________________________" << endl;
    cout << "Parkiran Basement " << endl;
    cout << "Kapasitas : 200" << endl;
    cout << "Jumlah Kendaraan Saat Ini : " << basement << endl;
    cout << "_______________________________" << endl;
    cout << "Parkiran B12" << endl;
    cout << "Kapasitas : 50" << endl;
    cout << "Jumlah Kendaraan Saat Ini : " << b12 << endl;
    cout << "_______________________________" << endl;
    cout << "Total Kapasitas : " << totalkapasitas << endl;
    cout << "Slot Kosong : " << slotkosong << endl;
    cout << "_______________________________" << endl;
    cout << "0.Keluar" << endl << endl;
    cout << "Pilihan : ";
    cin >> p;

    if (p == 0) {
        return;
    }
    else {
        cout << "__________PILIHAN TIDAK VALID!!!!!!_________" << endl << endl;
    }
} while (p != 0);
}




int main () {
    
    int menu;
    

    
    do { 
        cout << "========================================="
             << endl;

        cout << "       SISTEM INFORMASI PARKIR UM"
             << endl;

        cout << "========================================="
             << endl;

        cout << "1. masuk parkiran" << endl;
        cout << "2. keluar parkiran" << endl;
        cout << "3. Info" <<  endl;
        cout << "0. Keluar"<< endl;
        cout << endl << endl << "pilih : ";
        cin >> menu;
        cout << endl << endl;
        switch (menu) {
            case 1: masuk();break;
            case 2: keluar();break;
            case 3: info(); break;
            case 0: cout << endl << endl << endl; 
                    cout << "Terima kasih telah menggunakan "
                     << "Sistem Informasi Parkir UM."
                     << endl;
                    break;
            default : cout << "_______PILIHAN TIDAK VALID !!!!_________" << endl << endl;
        }
    } while (menu != 0);

}
