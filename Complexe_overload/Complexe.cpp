#include "Complexe.h"
#include <iostream>
using namespace std;

Complexe::Complexe(double r, double i)
{
	this->re = r;
	this->img = i;
}

Complexe::Complexe(const Complexe& C)
{
	this->re = C.re;
	this->img = C.img;
}

Complexe Complexe::operator+(Complexe C) const
{
	Complexe* res = new Complexe(0.0,0.0);
	res->re = this->re + C.re;
	res->img = this->img + C.img;
	return *res;
}

Complexe Complexe::operator+(double re) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re + re;
	res->img = this->img ;
	return *res;
}

Complexe Complexe::operator-(Complexe C) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re - C.re;
	res->img = this->img - C.img;
	return *res;
}

Complexe Complexe::operator-(double re) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re + re;
	res->img = this->img;
	return *res;
}

Complexe Complexe::operator*(Complexe C) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re *C.re - this->img * C.img;
	res->img = this->re * C.img + this->img * C.re;
	return *res;
}

Complexe Complexe::operator*(double re) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re * re;
	res->img = this->img * re;
	return *res;
}

Complexe Complexe::operator/(Complexe C) const
{
	if (C.re == 0 && C.img == 0)
	{
		cout << "On ne peut pas diviser par zéro" << endl;
		return *this;
	}
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = (this->re * C.re + this->img * C.img) / (C.re * C.re + C.img * C.img);
	res->img = (this->img * C.re - this->re * C.img) / (C.re * C.re + C.img * C.img);
	return *res;
}

Complexe Complexe::operator/(double re) const
{
	if(re == 0)
	{
		cout << "On ne peut pas diviser par zéro" << endl;
		return *this;
	}
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re / re;
	res->img = this->img / re;
	return *res;
}

Complexe Complexe::operator=(const Complexe& C)
{
	this->re = C.re;
	this->img = C.img;
	return *this;
}

Complexe Complexe::operator=(double re)
{
	this->re = re;
	this->img = 0;
	return *this;
}

Complexe Complexe::operator+=(const Complexe& C)
{
	this->re += C.re;
	this->img += C.img;
	return *this;
}

Complexe Complexe::operator+=(double re)
{
	this->re += re;
	return *this;
}

Complexe Complexe::operator-=(const Complexe& C)
{
	this->re -= C.re;
	this->img -= C.img;
	return *this;
}

Complexe Complexe::operator-=(double re)
{
	this->re -= re;
	return *this;
}

Complexe Complexe::operator*=(const Complexe& C)
{
	this->re = this->re * C.re - this->img * C.img;
	this->img = this->re * C.img + this->img * C.re;
	return *this;
}

Complexe Complexe::operator*=(double re)
{
	this->re *= re;
	this->img *= re;
	return *this;
}

Complexe Complexe::operator/=(const Complexe& C)
{
	if (C.re == 0 && C.img == 0)
	{
		cout << "On ne peut pas diviser par zéro" << endl;
		return *this;
	}
	this->re = (this->re * C.re + this->img * C.img) / (C.re * C.re + C.img * C.img);
	this->img = (this->img * C.re - this->re * C.img) / (C.re * C.re + C.img * C.img);
	return *this;
}

Complexe Complexe::operator/=(double re)
{
	if(re == 0)
	{
		cout << "On ne peut pas diviser par zéro" << endl;
		return *this;
	}
	this->re /= re;
	this->img /= re;
	return *this;
}

Complexe Complexe::operator++()
{
	this->re++;
	this->img++;
	return *this;
}

Complexe Complexe::operator--()
{
	this->re--;
	this->img--;
	return *this;
}

bool Complexe::operator==(const Complexe& C) const
{
	if (this->re == C.re && this->img == C.img)
	{
		cout << "Les deux complexe sont egaux" << endl;
		return true;
	}
	else {
		cout << "Les deux complexe ne sont pas egaux" << endl;
		return false;	
	}
}

bool Complexe::operator==(double re) const
{
	if (this->re == re && this->img == 0)
	{
		cout << "Le complexe est egale au reel" << endl;
		return true;
	}
	else {
		cout << "Le complexe n'est pas egale au reel" << endl;
		return false;	
	}
}

bool Complexe::operator!=(const Complexe& C) const
{
	if( this->re != C.re || this->img != C.img)
	{
		cout << "Les deux complexe sont different" << endl;
		return true;
	}
	else {
		cout << "Les deux deux complexe sont egaux" << endl;
		return false;
	}
}

bool Complexe::operator!=(double re) const
{
	if( this->re != re || this->img != 0)
	{
		cout << "Le complexe est different du reel" << endl;
		return true;
	}
	else {
		cout << "Le complexe est egale au reel" << endl;
		return false;
	}
}	

bool Complexe::operator>(const Complexe& C) const
{
	if( this->re > C.re && this->img > C.img)
	{
		cout << "Le complexe courant est superieur" << endl;
		return true;
	}
	else {
		cout << "Le complexe courant n'est pas superieur" << endl;
		return false;
	}
}

bool Complexe::operator>(double re) const
{
	if (this->re > re && this->img > 0)
	{
		cout << "Le complexe est superieur au reel" << endl;
		return true;
	}
	else {
		cout << "Le complexe n'est pas superieur au reel" << endl;
		return false;
	}
}


bool Complexe::operator<(const Complexe& C) const
{
	if( this->re < C.re && this->img < C.img)
	{
		cout << "Le complexe courant est inferieur" << endl;
		return true;
	}
	else {
		cout << "Le complexe courant n'est pas inferieur" << endl;
		return false;
	}
}

bool Complexe::operator<(double re) const
{
	if (this->re < re && this->img < 0)
	{
		cout << "Le complexe est inferieur au reel" << endl;
		return true;
	}
	else {
		cout << "Le complexe n'est pas inferieur au reel" << endl;
		return false;
	}
}


bool Complexe::operator>=(const Complexe& C) const
{
	if( this->re >= C.re && this->img >= C.img)
	{
		cout << "Le complexe courant est superieur ou egal" << endl;
		return true;
	}
	else {
		cout << "Le complexe courant n'est pas superieur ou egal" << endl;
		return false;
	}
}

bool Complexe::operator>=(double re) const
{
	if (this->re >= re && this->img >= 0)
	{
		cout << "Le complexe est superieur ou egal au reel" << endl;
		return true;
	}
	else {
		cout << "Le complexe n'est pas superieur ou egal au reel" << endl;
		return false;
	}
}

bool Complexe::operator<=(const Complexe& C) const
{
	if( this->re <= C.re && this->img <= C.img)
	{
		cout << "Le complexe courant est inferieur ou egal" << endl;
		return true;
	}
	else {
		cout << "Le complexe courant n'est pas inferieur ou egal" << endl;
		return false;
	}
}

bool Complexe::operator<=(double re) const
{
	if (this->re <= re && this->img <= 0)
	{
		cout << "Le complexe est inferieur ou egal au reel" << endl;
		return true;
	}
	else {
		cout << "Le complexe n'est pas inferieur ou egal au reel" << endl;
		return false;
	}
}	


void Complexe::affiher() const
{
	if(this-> img < 0)
	{
		cout << "Le nbr complexe est:" << this->re << this->img << "i" << endl;
	}
	cout << "Le nbr complexe est:" << this->re << "+" << this->img << "i" << endl;
}

Complexe::~Complexe()
{
}

