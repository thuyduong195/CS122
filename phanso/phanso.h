#ifndef PHANSO_H
#define PHANSO_H
#include <iostream>
using namespace std;
class phanso
{
	private:
		int tuso;
		int mauso;
	public:
		//contructor
		phanso();
		
		phanso(int tu);
		
		phanso(int tu, int mau);
		
		//setters
		void setTuso(int tu);
		void setMauso(int mau);
		
		//getters
		int getTuso() const;
		
		int getMauso() const;
		
		//methods
		phanso operator +(const phanso &b) const;
		
		friend phanso operator + (int a, const phanso &b);
		
		void operator += (const phanso &b);
		
		bool operator == (const phanso &b);
		
		phanso operator ++ (int);// A++
		
		phanso operator ++ ();// ++A
		friend istream &operator >>(istream & in, phanso &b);
		
		friend ostream &operator <<(ostream & out,const phanso &b);
		
		operator float();
		operator int();
		
};
#endif
