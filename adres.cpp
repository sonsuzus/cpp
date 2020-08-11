#include <iostream>
using namespace std;

class Adres{
	char *ad, *sehir;
	public:
		void sakla(char *a, char *b);
		void goster();
};

void Adres::sakla(char *a, char *b)
{
	ad = a;
	sehir = b;
}

void Adres::goster(){
	cout<<"Ad: "<<ad<<"\n"<<"Sehir: "<<sehir;
}

int main()
{
	Adres benim;
	benim.sakla("ufuk","balikesir");
	benim.goster();
	
	return 0;
}
