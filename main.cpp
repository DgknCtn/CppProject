#include <iostream>
using namespace std;

int main() {
    string password;
    int choice;
    double amount;
    string confirmation;
    string iban;
    int transferAmount;
    int phoneNumber;
    int smsCode;
    
    for (int i = 1; i <= 5; i++) {
        cout << "** BANKAMIZA HOSGELDINIZ **" << endl << endl;
        cout << "Sifre Giriniz: ";
        cin >> password;
        
        if (password == "0000") {
            cout << "Sifre Dogru" << endl << endl;
            
            cout << "Lutfen Yapmak Isteginiz Islemi Secin" << endl << endl;
            cout << "Para Yatirmak Icin 1" << endl;
            cout << "Para Cekmek Icin 2" << endl;
            cout << "EFT Yapmak Icin 3" << endl;
            
            cin >> choice;
            cout << endl;
            
            if (choice == 1) {
                cout << "Para Yatirma Islemine Hos Geldiniz" << endl << endl;
                cout << "Yatirilan Tutar Onayliyor Musunuz? (E/H): ";
                cin >> confirmation;
                
                if (confirmation == "E" || confirmation == "e") {
                    // Yatirma islemi gerceklestirme
                }
                else {
                    cout << "Islem Iptal Edildi" << endl;
                }
            }
            else if (choice == 2) {
                cout << "Para Cekme Menusundesiniz" << endl;
                // Para cekme islemi
            }
            else if (choice == 3) {
                cout << "Para Gonderme Menusundesiniz" << endl;
                cout << "IBAN Numarasi Giriniz: TR ";
                cin >> iban;
                // EFT islemi
            }
            else {
                cout << "Gecersiz islem secimi" << endl;
            }
        }
        else {
            cout << "Sifre Yanlis" << endl;
        }
    }
    
    return 0;
}