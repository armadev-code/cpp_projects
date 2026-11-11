#include <iostream>

using namespace std;


int main()
{
    float kwh, tutar;
    cout << "Kullanim degerinizi giriniz: ";
    cin >> kwh;
    tutar = 0;

    if (kwh >= 0) {
        if (kwh - 100 >= 0) {
            kwh = kwh - 100;
            tutar = tutar + 100 * 1.5;
            if (kwh - 150 >= 0) {
                kwh = kwh - 150;
                tutar = tutar + 150 * 2;
                if (kwh > 0) {
                    tutar = tutar + kwh * 3;

                }

            }
            else {
                tutar = tutar + kwh * 2;
            }
        }
        else {
            tutar = tutar + kwh * 1.5;
        }
    cout << "Tuketiminizin bedeli: " << tutar << endl;
    }
    else {
        cout << "Gecersiz islem girildi!!";
        
    }

    
    return 0;
}

