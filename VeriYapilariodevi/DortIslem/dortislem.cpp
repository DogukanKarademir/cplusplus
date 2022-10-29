#include <iostream>
#include <conio.h>
using namespace std;

int toplama(int sayi1,int sayi2){
	return sayi1+sayi2;
}
int cikarma(int sayi1,int sayi2){
	return sayi1-sayi2;
}
int carpma(int sayi1,int sayi2){
	return sayi1*sayi2;
}
double bolme(double sayi1,double sayi2){
	return sayi1/sayi2;

}

int main(int argc, char** argv) {
	int x;
	int a;
	int b;
	cout<<"birinci sayiyi giriniz"<<endl;
	cin>>a;
	cout<<"ikinci sayiyi giriniz"<<endl;
	cin>>b;
	cout<<"toplama icin 1,cikarma için 2,carpma icin 3,bolme icin 4 e basiniz"<<endl;
	cin>>x;
	if(x==1){
		cout<<toplama(a,b);
}
	else if(x==2){
		cout<<cikarma(a,b);}
	else if(x==3){
		cout<<carpma(a,b);}
	else if(x==4){
		cout<<bolme(a,b);
	}
	else{	
		cout<<"gercersiz sayi girisi";}
	
}
