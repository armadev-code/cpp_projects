#include <iostream>

using namespace std;

int main()
{
    int arac_turu;
    float sure;
    cout << "==========Welcome==========\n\n1-Otomobil\n2-Motosiklet\n3-Minibus\n\nArac Turunu Seciniz: ";
    cin >> arac_turu;
    cout << "Kalinan sure: ";
    cin >> sure;
    
    float tutar;
    tutar = 0;
    
    if (sure > 0) {
        switch (arac_turu) {
        case 1:
            if (sure <= 5) {
                tutar = sure * 80;
            }
            else {
                tutar = 5*80+((sure - 5) * (85*80 / 100));
            }
            break;
        case 2:
            if (sure <= 5) {
                tutar = sure * 50;
            }
            else {
                tutar = 5*50+((sure - 5) * (85*50 / 100));
            }
            break;

        case 3:
            if (sure <= 5) {
                tutar = sure * 100;
            }
            else {
                tutar = 5*100+((sure - 5) * (85*100 / 100));
            }
            break;

        default:
            cout << "Girilen islem turu hatali!!";
            break;

        }

        cout << "Toplam ucret: " << tutar << endl;
        
       
        
    }
    else {
        cout << "Girilen sayi 0 ya da negatif olamaz";
    }

    return 0;
    
}
