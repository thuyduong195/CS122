#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shap.h"
class Rectangle: public Shape
{
	public:
		Rectangle():Shap(0,0){}
		Rectangle(float width, float height):Shap(width,height){}
		
		//
		float getArea()const
		{
			return this -> width * this -> height;
		}
}
#endif
