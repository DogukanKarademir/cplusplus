#include <iostream>
#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void ust()
{
	cout<<"   ";
	for(int j=0;j<4;j++)
	{
		cout<<"*";
	}
}
void orta()
{
	cout<<" *"<<'\t'<<"*"<<endl;
}
void kenar()
{
	for(int i=0;i<3;i++)
	{
		cout<<"*"<<'\t'<<" *"<<endl;
	}	
}
int main(int argc, char** argv) {
	ust();
	cout<<endl;
	orta();
	kenar();
	orta();
	ust();	
	return 0;
}	
	
