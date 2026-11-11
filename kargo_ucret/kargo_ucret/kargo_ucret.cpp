#include <iostream>

using namespace std;

int main()
{
    float sepet_tutar, mesafe,toplam_tutar;
    cout << "Seper Tutarini Giriniz: ";
    cin >> sepet_tutar;
    cout << "Mesafeyi Giriniz: ";
    cin >> mesafe;
    toplam_tutar= 0;
    

    if (sepet_tutar > 0 && mesafe > 0) {
        if (sepet_tutar >= 1000) {
            toplam_tutar = sepet_tutar+0; //0tl 1000tl üzeri alışverişin kargo bedeli
        }
        else {
            if (mesafe > 0 && mesafe <= 20) {
                toplam_tutar = sepet_tutar + 40; //40tl 0-20 km arası kargo ücreti
            }
            else if (mesafe > 20) {
                toplam_tutar = sepet_tutar + 70; //70tl 20km den daha büyük mesafelerin kargo ücreti
            }
        }
    }
    else {
        cout << "Girilen girisler hatalidir. Girisler negatif ya da 0 olamaz";

    }
}
