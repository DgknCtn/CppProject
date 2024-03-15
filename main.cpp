#include <iostream>
using namespace std;

int main()

{
    int i;
	int sifre;
	int secim;
	int tutar;
	string onay;
	double iban;
	int gonderilecek_miktar;
	int telefon;
	int kod;
	string teyit;

for(i=1; i<=5; i++)
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
{
    cout<<"Para Cekme Menüsündesiniz"<<endl;
    cout<<"Lutfen Cekim Yapmak İstediginiz Tutari Girin"<<endl;
    cin>>tutar;

    if (tutar>=10000)
    {
        cout<<"Limit Asildi"<<endl;
        cout<<"Tekrar Deneyin"<<endl;
    }

    else
    {
        cout<<"Cekilen Tutar"<<tutar<<"TL"<<"Para Veriliyor"<<endl;
        cout<<"Kartinizi Almayi Unutmayin"<<endl;
    }
}

else if(secim==3)
{
    cout<<"Para Gonderme Menüsündesiniz"<<endl;
    cout<<"IBAN Numarasi Giriniz"<<endl;
    cout<<"TR "<<endl;
    cin>>iban;

    cout<<"Gondermek İstediginiz Tutari Giriniz"<<endl;
    cin>>gonderilecek_miktar;

    cout<<"BU EFT İslem Ucreti %1 Komisyon Kesmektedir"<<endl;
    cout<<"EFT İslem Ucret,"<<((gonderilecek_miktar*1)/100)<<"TL"<<endl;

    cout<<"Hesabinizdan Toplam Tahsil Edilecek Tutar"<<((gonderilecek_miktar)+(gonderilecek_miktar*1)/100)<<"TL"<<endl;
    cout<<"SMS İcin Telefon Numaranizi Giriniz"<<endl;
    cout<<"+90 ";
    cin>>"telefon";
    cout<<"Telefonunuza Gelen SMS Kodunu Girin"<<endl;
    cin>>kod;
    cout<<"İslemi Onayliyor Musunuz? E? H?"<<endl;
    cin>>teyit;
    if(teyit=="e")
    {
        cout<<"Para Gonderme İsleminiz Tamamlanmistir"<<endl;
    }
    else if(teyit=="h")
    {
        cout<<"İslem İptal Ediliyor"<<endl;
    }
    else
    {
        cout<<"Hata"<<endl;
    }

    }

}
else
{
    cout<<"Sifre Yanlis"<<endl;
}