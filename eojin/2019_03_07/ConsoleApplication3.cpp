#include "stdafx.h"
#include "iostream"

using namespace std;

struct Rect {
	float m_width;
	float m_height;

	void Print();
	void Init(float width, float height);
	float Perimeter();
	float Area();
};

void Rect::Print()
	{
		cout << "Width = " << m_width << endl << "Height = " << this->m_height << endl;
	}

void Rect::Init(float width, float height)
{
	this->m_width = width;
	m_height = height;
}
float Rect::Perimeter()
{
	return (m_height + m_width) * 2;
}

float Rect::Area()
{
	return (m_height*m_width);
}
int main()
{
	Rect* rect = new Rect;

	rect->Init(4, 5);
	rect->Print();
	cout << rect->Area()<<" ";
	cout << rect->Perimeter()<<endl;

	return 0;
}
