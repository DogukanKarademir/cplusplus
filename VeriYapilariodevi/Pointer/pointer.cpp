#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// pointerlar yoluyla deðiþkenleri deðiþtirme
void swap(int *a,int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
int main() {
	int a;
	int b;
	cout<<"1.sayiyi giriniz"<<endl;
	cin>>a;
	cout<<"2.sayiyi giriniz"<<endl;
	cin>>b;
	int *ip,id;
	id = a;
	ip = &id;
	int *ip2,id2;
	id2 = b;
	ip2 = &id2;
	cout<<"1.sayinin ilk degeri:"<<a<<'\n';
	cout<<"2.sayinin son degeri:"<<b<<'\n';
	cout<<"1.sayinin adresi:"<<ip<<'\n';
	cout<<"2.sayinin adresi:"<<ip2<<'\n';
	swap(&a,&b);
	
	cout<<"1.sayinin son degeri:"<<a<<'\n';
	cout<<"2.sayinin son degeri:"<<b<<'\n';
	cout<<"1.sayinin son adresi:"<<ip<<'\n';
	cout<<"2.sayinin son adresi:"<<ip2<<'\n';
	return 0;
}

