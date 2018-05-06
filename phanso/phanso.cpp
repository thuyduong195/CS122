#include "phanso.h"

phanso::phanso():tuso(0),mauso(1)
{}

phanso::phanso(int tu):tuso(tu),mauso(1)
{}

phanso::phanso(int tu, int mau):tuso(tu),mauso(mau)
{}

//setters
void phanso::setTuso(int tu)
{
	this->tuso = tu;
}
void phanso::setMauso(int mau)
{
	this->mauso = mau;
}

//getters
int phanso::getTuso() const
{
	return this->tuso;
}

int phanso::getMauso() const
{
	return this->mauso;
}

//methods
phanso phanso::operator +(const phanso &b) const
{
	phanso kq;
	kq.tuso = this->tuso*b.mauso + this->mauso*b.tuso;
	kq.mauso = this->mauso * b.mauso;
	return kq;
}

phanso operator + (int a, const phanso &b)
{
	return phanso(a*b.mauso + b.tuso,b.mauso);
}

void phanso::operator += (const phanso &b)
{
	this -> tuso = this->tuso*b.mauso + this->mauso*b.tuso;
	this -> mauso=this->mauso * b.mauso;
}

bool phanso::operator == (const phanso &b)
{
	return this-> tuso*b.mauso == this ->mauso*b.tuso;
}

phanso phanso::operator ++ (int)// A++
{
	cout<<"A++"<<endl;
	phanso a(this->tuso,this->mauso);
	this -> tuso = this -> tuso  + this -> mauso;
	return a;
}

phanso phanso::operator ++ ()// ++A
{
	cout<<"++A"<<endl;
	this -> tuso = this -> tuso  + this -> mauso;
	return phanso(this->tuso,this->mauso);
}
istream &operator >>(istream & in, phanso &b)
{
	cout<<"Moi ban nhap tu so: ";
	in>>b.tuso;
	cout<<"Moi ban nhap mau so: ";
	in>>b.mauso;
	
	return in;
}

ostream &operator <<(ostream & out,const phanso &b)
{
	out<<b.tuso<<"/"<<b.mauso<<endl;
	return out;
}

phanso::operator float()
{
    return this->tuso/(float)this->mauso;
}
phanso::operator int()
{
    return this->tuso/this->mauso;
}
