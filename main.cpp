#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Şifreyi MD5 ile karma hale getirir
string sifrele(string sifre) {
  // MD5 algoritmasını kullanarak şifreyi karma hale getirin
  return "hashed_password";
}

int main() {
  string password;
  int choice;
  double amount;
  string confirmation;
  string iban;
  int transferAmount;
  int phoneNumber;
  int smsCode;
  int denemeSayisi = 0;

  while (denemeSayisi < 3) {
    cout << "** BANKAMIZA HOSGELDINIZ **" << endl << endl;
    cout << "Sifre Giriniz: ";
    cin >> password;

    if (sifrele(password) == "hashed_password") {
      cout << "Sifre Dogru" << endl << endl;

      do {
        cout << "Lutfen Yapmak Isteginiz Islemi Secin" << endl << endl;
        cout << "Para Yatirmak Icin 1" << endl;
        cout << "Para Cekmek Icin 2" << endl;
        cout << "EFT Yapmak Icin 3" << endl;

        cin >> choice;
      } while (choice < 1 || choice > 3);

      cout << endl;

      switch (choice) {
        case 1:
          paraYatir(amount);
          break;
        case 2:
          paraCek(amount);
          break;
        case 3:
          eftYap(iban, transferAmount);
          break;
      }

      break;
    } else {
      cout << "Sifre Yanlis" << endl;
      denemeSayisi++;
    }
  }

  if (denemeSayisi >= 3) {
    cout << "Hesabiniz bloke edildi!" << endl;
  }

  return 0;
}

void paraYatir(double miktar) {
  // Para yatırma işlemi
  cout << miktar << " TL yatirma islemi basarili!" << endl;
}

void paraCek(double miktar) {
  // Para çekme işlemi
  cout << miktar << " TL para cekme islemi basarili!" << endl;
}

void eftYap(string iban, double miktar) {
  // EFT işlemi
  cout << miktar << " TL " << iban << " numarali hesaba gonderildi!" << endl;
}
