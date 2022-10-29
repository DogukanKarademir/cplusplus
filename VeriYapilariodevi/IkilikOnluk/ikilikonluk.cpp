#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <conio.h>
#include <string.h>

using namespace std;
void ikiliktenOnluk(){  
      
    long girilen;  
      
    sayiGir :  
      
    cout << "Ýkilik sayýyý giriniz : ";  
    cin >> girilen;  
      
   
    long onluk = 0, sayi, i = 1;  
    while (girilen > 0)  
    {  
        sayi = girilen % 10;  
        onluk = onluk + sayi * i;  
        i = i * 2;  
        girilen = girilen / 10;  
    }  
      
    cout << "Onluk sayýsý : " << onluk << endl << endl;  
      
    
}  
void onluktanikilik(){  
      
    long girilen;  
      
    cout << "Onluk sayýyý giriniz : ";  
    cin >> girilen;  
      
    
    int n = 0, ikili[100];  
      
    while (girilen > 0) {  
          
        if (girilen%2 == 0)  
            ikili[n] = 0;  
        else  
            ikili[n] = 1;  
          
        girilen /= 2;  
        n++;  
    }  
      
    cout << "Ýkilik sayý : ";  
      
    for (n = n-1; 0 <= n; n--) {  
        cout << ikili[n];  
    }  
      
    cout << endl << endl;  
      
   
   
}  
  
int main(){  
    setlocale(LC_ALL, "Turkish");
    secis :  
      
    cout << "onluk sistemdeki sayýyý ikiliðe çevirmek için '1'e basýnýz" << endl;  
    cout << "ikilik sistemdeki ssayiyi onluk sisteme çevirmek için '2'ye basýnýz" << endl;  
    char secim;  
    cin >> secim;  
      
    switch (secim) {  
        case '1':  
            onluktanikilik();  
            break;  
        case '2':  
            ikiliktenOnluk();  
            break;  
        default:  
            cout << "Hatali seçim geçerli bir sayý giriniz" << endl;  
            goto secis;  
            break;  
    }  
    
    return 0;  
}  
  

