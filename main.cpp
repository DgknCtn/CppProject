#include <iostream>
using namespace std;

int main()

{
	int sifre;
	int secim;
	int tutar;
	string onay;
	double iban;
	int gonderilecek_miktar;
	int telefon;
	int kod;
	string teyit;

	cout << "** BANKAMİZA HOSGELDİNİZ **" << endl << endl;
	cout << "Sifre Giriniz" << endl;
	cin >> sifre;
    if(sifre==0000)
    {
        cout<<"Sifre Dogru"<<endl<<endl;
        
cout<<"Lutfen Yapmak İstediginiz İslemi Secin"<<endl<<endl;
cout<<"Para Yatirmak İcin 1"<<endl<<endl;
cout<<"Para Cekmek İcin 2"<<endl<<endl;
cout<<"EFT Yapmak İcin 3"<<endl<<endl;

cin>>secim;
cout<<endl;
if(secim==1)
{
    cout<<"Para Yatirma İslemine Hos Geldiniz"<<endl<<endl;
    cout<<"Paranizi Yerlestiriniz"<<endl<<endl;
    cout<<"Yatirilan Tutari Onayliyor Musunuz? E? H?"<<endl<<endl;
cin>>onay;

if(onay=="e")
{
    cout<<"Para Yatiriliyor..."<<endl;
    cout<<"Kartinizi Almayi Unutmayin"<<endl;
}
else if(onay=="h")
{
    cout<<"İslem İptal Edildi"<<endl;
    cout<<"Kartiniz İade Ediliyor"<<endl;
}
else
{
    cout<<"Hata"<<endl;
    cout<<"Kart İade Ediliyor"<<endl;
}
}

else if(secim==2)

}
}