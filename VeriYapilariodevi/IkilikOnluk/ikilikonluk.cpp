#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <conio.h>
#include <string.h>

using namespace std;
void ikiliktenOnluk(){  
      
    long girilen;  
      
    sayiGir :  
      
    cout << "�kilik say�y� giriniz : ";  
    cin >> girilen;  
      
   
    long onluk = 0, sayi, i = 1;  
    while (girilen > 0)  
    {  
        sayi = girilen % 10;  
        onluk = onluk + sayi * i;  
        i = i * 2;  
        girilen = girilen / 10;  
    }  
      
    cout << "Onluk say�s� : " << onluk << endl << endl;  
      
    
}  
void onluktanikilik(){  
      
    long girilen;  
      
    cout << "Onluk say�y� giriniz : ";  
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
      
    cout << "�kilik say� : ";  
      
    for (n = n-1; 0 <= n; n--) {  
        cout << ikili[n];  
    }  
      
    cout << endl << endl;  
      
   
   
}  
  
int main(){  
    setlocale(LC_ALL, "Turkish");
    secis :  
      
    cout << "onluk sistemdeki say�y� ikili�e �evirmek i�in '1'e bas�n�z" << endl;  
    cout << "ikilik sistemdeki ssayiyi onluk sisteme �evirmek i�in '2'ye bas�n�z" << endl;  
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
            cout << "Hatali se�im ge�erli bir say� giriniz" << endl;  
            goto secis;  
            break;  
    }  
    
    return 0;  
}  
  

