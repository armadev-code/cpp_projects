#include <iostream>
using namespace std;

int main()
{
    float sepet_tutar, mesafe,toplam_tutar,kargo_ucreti;
    cout << "Seper Tutarini Giriniz: ";
    cin >> sepet_tutar;
    cout << "Mesafeyi Giriniz: ";
    cin >> mesafe;
    toplam_tutar= 0;
    kargo_ucreti = 0;   
    

    if (sepet_tutar > 0 && mesafe > 0) {
        if (sepet_tutar >= 1000) {
            kargo_ucreti = 0;
            toplam_tutar = sepet_tutar+kargo_ucreti; 
        }
        else {
            if (mesafe > 0 && mesafe <= 20) {
                kargo_ucreti = 40;
                toplam_tutar = sepet_tutar + kargo_ucreti; 
            }
            else if (mesafe > 20) {
                kargo_ucreti = 70;
                toplam_tutar = sepet_tutar + kargo_ucreti; 
            }
        }
        cout << "======Alisveris Ozeti======\n\nSepet Tutari: " << sepet_tutar << "\nKargo Ucreti: " << kargo_ucreti << "\n----- " << "Toplam: " << toplam_tutar << " --------" << endl;
    }
    else {
        cout << "Girilen girisler hatalidir. Girisler negatif ya da 0 olamaz"<<endl;

    }

    


    
    return 0;
}
