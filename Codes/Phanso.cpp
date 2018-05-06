#include <iostream>
using namespace std;
class phanso
{
	private:
		int tuso;
		int mauso;
	public:
		//contructor
		phanso():tuso(0),mauso(1)
		{}
		
		phanso(int tu):tuso(tu),mauso(1)
		{}
		
		phanso(int tu, int mau):tuso(tu),mauso(mau)
		{}
		
		//setters
		void setTuso(int tu)
		{
			this->tuso = tu;
		}
		void setMauso(int mau)
		{
			this->mauso = mau;
		}
		
		//getters
		int getTuso() const
		{
			return this->tuso;
		}
		
		int getMauso() const
		{
			return this->mauso;
		}
		
		//methods
		phanso operator +(const phanso &b) const
		{
			phanso kq;
			kq.tuso = this->tuso*b.mauso + this->mauso*b.tuso;
			kq.mauso = this->mauso * b.mauso;
			return kq;
		}
		
		friend phanso operator + (int a, const phanso &b)
		{
			return phanso(a*b.mauso + b.tuso,b.mauso);
		}
		
		void operator += (const phanso &b)
		{
			this -> tuso = this->tuso*b.mauso + this->mauso*b.tuso;
			this -> mauso=this->mauso * b.mauso;
		}
		
		bool operator == (const phanso &b)
		{
			return this-> tuso*b.mauso == this ->mauso*b.tuso;
		}
		
		phanso operator ++ (int)// A++
		{
			cout<<"A++"<<endl;
			phanso a(this->tuso,this->mauso);
			this -> tuso = this -> tuso  + this -> mauso;
			return a;
		}
		
		phanso operator ++ ()// ++A
		{
			cout<<"++A"<<endl;
			this -> tuso = this -> tuso  + this -> mauso;
			return phanso(this->tuso,this->mauso);
		}
		friend istream &operator >>(istream & in, phanso &b)
		{
			cout<<"Moi ban nhap tu so: ";
			in>>b.tuso;
			cout<<"Moi ban nhap mau so: ";
			in>>b.mauso;
			
			return in;
		}
		
		friend ostream &operator <<(ostream & out,const phanso &b)
		{
			out<<b.tuso<<"/"<<b.mauso<<endl;
			return out;
		}
		
		operator float()
		{
		    return this->tuso/(float)this->mauso;
		}
		operator int()
		{
		    return this->tuso/this->mauso;
		}
		
};

int main()
{
	phanso a(5,4),b;
	phanso c = 10 + a;
	cout<<(int)c;
}
