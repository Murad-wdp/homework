#include <iostream>
using namespace std;
struct Franction
{
	int suret;
	int mexrec;

	Franction(int Suret, int Mexrec) {
		suret = Suret;
		if (mexrec == 0)
		{
			cout << "Mexrec 0-ola bilmez. Cavabiniz: 1" << endl;
		}
		else
		{
			mexrec = Mexrec;
		}
	}
	void showFranction() {
		cout << suret << "/" << mexrec << endl;
	}

	Franction toplama(const Franction& other)
	{
		int new_suret = (suret * other.mexrec) + (other.suret * mexrec);
		int new_mexrec = mexrec * other.mexrec;
		return Franction(new_suret, new_mexrec);
	}
	Franction cixma(const Franction& other)
	{
		int new_suret = (suret * other.mexrec) - (other.suret * mexrec);
		int new_mexrec = mexrec * other.mexrec;
		return Franction(new_suret, new_mexrec);
	}
	Franction vurma(const Franction& other)
	{
		int new_suret = suret * other.suret;
		int new_mexrec = mexrec * other.mexrec;
		return Franction(new_suret, new_mexrec);
	}
	Franction bolme(const Franction& other)
	{
		int new_suret = suret * other.mexrec;
		int new_mexrec = mexrec * other.suret;
		if (new_mexrec == 0)
		{
			cout << "Mexrec 0 ola bilmez" << endl;
			new_mexrec = 1;
		}
		return Franction(new_suret, new_mexrec);
	}


};
void main() {
	Franction frac1(1, 2); 
	Franction frac2(1, 3); 

	cout << "First fraction: ";
	frac1.showFranction();

	cout << "Second fraction: ";
	frac2.showFranction();

	Franction sum = frac1.toplama(frac2);
	cout << "Toplama: ";
	sum.showFranction();

	Franction diff = frac1.cixma(frac2);
	cout << "Cixma: ";
	diff.showFranction();

	Franction prod = frac1.vurma(frac2);
	cout << "Vurma: ";
	prod.showFranction();

	Franction quot = frac1.bolme(frac2);
	cout << "Bolme: ";
	quot.showFranction();

}