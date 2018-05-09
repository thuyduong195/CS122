#ifndef SHAP_H
#define SHAP_H
#include <iostream>
using namespace std;

class Shap
{
	protected:
		float width;
		float height;
	public:
		Shap():width(0),height(0){}
		Shap(float a, float b):width(a),height(b){}
		//setters
		void setWidth(float a)
		{
			this -> width = a;
		}
		
		void setHeight(float b)
		{
			this -> height = b;
		}
		//getters
		float getWidth()const
		{
			return this -> width;
		}
		float getHeight()const
		{
			return this-> height;
		}
		
};

#endif
