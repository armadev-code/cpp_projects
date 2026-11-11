#include <iostream>

using namespace std;

int main()
{
    int bakiye, cekilecek_tutar;
    cout << "Bakiyeniz: ";
    cin >> bakiye;
    cout << "Cekmek istediginiz tutar: ";
    cin >> cekilecek_tutar;

    if (cekilecek_tutar > 0 && cekilecek_tutar % 10 == 0 && cekilecek_tutar <= bakiye && cekilecek_tutar <= 5000) {
        bakiye = bakiye - cekilecek_tutar;
        cout << "Islem Basarili"<<endl;
        cout << "Cekilen Tutar: " << cekilecek_tutar << "\nKalan Bakiye: " << bakiye << endl;
    }
    else {
        if (cekilecek_tutar > 5000) {
            cout << "5000TL den fazla para cekemezsiniz.";
        }
        else if (cekilecek_tutar < 0) {
            cout << "Negatif deger giremezsiniz.";
        }
        else if (cekilecek_tutar > bakiye) {
            cout << "Bakiyenizden fazla para cekemezsiniz.";
        }
        else if (cekilecek_tutar % 10 != 0) {
            cout << "Cektiginiz tutar 10 un katlari olmak zorundadir.";
        }
        
        else{
            cout << "Girisler hatali";
        }
    }
    return 0;
}
