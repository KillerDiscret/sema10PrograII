#pragma once
using namespace System;
class Circulo
{
private:
	int x, y, radio, dx, dy;
public:
	Circulo(void);
	~Circulo(void);
	Circulo(int px, int py,int pr);
	void borrar(Drawing::Graphics ^gr);
	void mover(Drawing::Graphics ^gr);
	void dibujar(Drawing::Graphics ^gr);
};
Circulo::Circulo()
{
	x = y = dx = dy = radio = 0;
}
Circulo::~Circulo()
{

}
Circulo::Circulo(int px, int py, int pr)
{
	x = px;
	y = py;
	radio = pr;
	dx = 5;
	dy = 5;
}
void Circulo::borrar(Drawing::Graphics ^gr)
{
	gr->DrawEllipse(gcnew Drawing::Pen(Drawing::Color::White), x, y, radio, radio);

}
void Circulo::dibujar(Drawing::Graphics ^gr)
{
	gr->DrawEllipse(gcnew Drawing::Pen(Drawing::Color::Red), x, y, radio, radio);

}
void Circulo::mover(Drawing::Graphics ^gr)
{
	borrar(gr);
	if (x+dx<1||x+dx+radio>=gr->VisibleClipBounds.Width)
	{
		dx *= -1;
	}	
	if (y + dy<1 || y + dy + radio>=gr->VisibleClipBounds.Height)
	{
		dy *= -1;
	}
	x += dx;
	y += dy;
	dibujar(gr);
}