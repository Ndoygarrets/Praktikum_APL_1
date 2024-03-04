#include <iostream>
#include <string>

using namespace std;

int konversi(){

    int pilihan;
    double kecepatan, hasil;
    string unitAsal, unitTujuan;

    while (true) {
        cout << "Pilih menu yang ingin melakukan konversi kecepatan: \n";
        cout << "1. Konversi Kilometer/jam ke (Centimeter/detik, Meter/detik, Mil/jam) \n";
        cout << "2. Konversi Centimeter/detik ke (Kilometer/jam, Meter/detik, Mil/jam) \n";
        cout << "3. Konversi Meter/detik ke (Kilometer/jam, Centimeter/detik, Mil/jam) \n";
        cout << "4. Konversi Mil/jam ke (Kilometer/jam, Centimeter/detik, Meter/detik) \n";
        cout << "5. keluar\n: ";
        cin >> pilihan;

        if (pilihan == 5) {
            break;
        }

        switch (pilihan) {
            case 1:
                cout << "Masukkan kecepatan dalam unit Kilometer/jam: ";
                cin >> kecepatan;
                cout << "Masukkan unit tujuan (Centimeter/detik, Meter/detik, Mil/jam): ";
                cin >> unitTujuan;

                if (unitTujuan == "Centimeter/detik") {
                    hasil = kecepatan * 100000;
                    cout << "Hasil konversi: " << kecepatan << " km/jam sama dengan " << hasil << " cm/detik" << endl;
                }
                else if (unitTujuan == "Meter/detik") {
                    hasil = kecepatan * 1000;
                    cout << "Hasil konversi: " << kecepatan << " km/jam sama dengan " << hasil << " m/detik" << endl;
                }
                else if (unitTujuan == "Mil/jam") {
                    hasil = kecepatan * 1.60934;
                    cout << "Hasil konversi: " << kecepatan << " km/jam sama dengan " << hasil << " mil/jam" << endl;
                }
                break;
            case 2:
                cout << "Masukkan kecepatan dalam unit Centimeter/detik: ";
                cin >> kecepatan;
                cout << "Masukkan unit tujuan (Kilometer/jam, Meter/detik, Mil/jam): ";
                cin >> unitTujuan;

                if (unitTujuan == "Kilometer/jam") {
                    hasil = kecepatan / 100000;
                    cout << "Hasil konversi: " << kecepatan << " cm/detik sama dengan " << hasil << " km/jam" << endl;
                }
                else if (unitTujuan == "Meter/detik") {
                    hasil = kecepatan / 1000;
                    cout << "Hasil konversi: " << kecepatan << " cm/detik sama dengan " << hasil << " m/detik" << endl;
                }
                else if (unitTujuan == "Mil/jam") {
                    hasil = kecepatan / 1.60934;
                    cout << "Hasil konversi: " << kecepatan << " cm/detik sama dengan " << hasil << " mil/jam" << endl;
                }
                break;
            case 3:
                cout << "Masukkan kecepatan dalam unit Meter/detik: ";
                cin >> kecepatan;
                cout << "Masukkan unit tujuan (Kilometer/jam, Centimeter/detik, Mil/jam): ";
                cin >> unitTujuan;

                if (unitTujuan == "Kilometer/jam") {
                    hasil = kecepatan / 1000;
                    cout << "Hasil konversi: " << kecepatan << " m/detik sama dengan " << hasil << " km/jam" << endl;
                }
                else if (unitTujuan == "Centimeter/detik") {
                    hasil = kecepatan * 100000;
                    cout << "Hasil konversi: " << kecepatan << " m/detik sama dengan " << hasil << " cm/detik" << endl;
                }
                else if (unitTujuan == "Mil/jam") {
                    hasil = kecepatan / 1.60934;
                    cout << "Hasil konversi: " << kecepatan << " m/detik sama dengan " << hasil << " mil/jam" << endl;
                }
                break;
            case 4:
                cout << "Masukkan kecepatan dalam unit Mil/jam: ";
                cin >> kecepatan;
                cout << "Masukkan unit tujuan (Kilometer/jam, Centimeter/detik, Meter/detik): ";
                cin >> unitTujuan;

                if (unitTujuan == "Kilometer/jam") {
                    hasil = kecepatan * 1.60934;
                    cout << "Hasil konversi: " << kecepatan << " mil/jam sama dengan " << hasil << " km/jam" << endl;
                }
                else if (unitTujuan == "Centimeter/detik") {
                    hasil = kecepatan * 160934; // Centimeter dalam satu mil
                    cout << "Hasil konversi: " << kecepatan << " mil/jam sama dengan " << hasil << " cm/detik" << endl;
                }
                else if (unitTujuan == "Meter/detik") {
                    hasil = kecepatan * 1609.34; // Meter dalam satu mil
                    cout << "Hasil konversi: " << kecepatan << " mil/jam sama dengan " << hasil << " m/detik" << endl;
                }
                break;
            default:
                cout << "Pilihan tidak valid. Silakan masukkan nomor menu yang valid." << endl;
        }
    }

    return 0;

     } 

 int login() {
    string username;
    string nim; 
    for (int i = 0; i < 3; i++ ) {
        cout << "Masukkan username: ";
        getline(cin, username);
        cout << "Masukkan NIM: ";
        getline(cin, nim);
     
        if(username == "Muhammad Ariando Ferdian" && nim == "2309106086") {
            cout << "Login berhasil!" << endl;
           return true;
    }   else {  
          cout << "Username atau NIM salah. Silakan coba lagi.\n" << endl;

    }
 }
 cout << "Anda telah mencoba login sebanyak 3 kali. Login gagal." << endl;
 return 0;
}

int main() {
    if(login()) {
        konversi();
        cout << "berhasil";
    } else {
        cout << "Login gagal.\n";
    }
    return 0;
}
