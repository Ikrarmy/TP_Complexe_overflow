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
    Complexe res(0.0, 0.0);
    res.re = this->re + C.re;
    res.img = this->img + C.img;
    return res;
}

Complexe Complexe::operator+(double r) const
{
    Complexe res(0.0, 0.0);
    res.re = this->re + r;
    res.img = this->img;
    return res;
}

Complexe Complexe::operator-(Complexe C) const
{
    Complexe res(0.0, 0.0);
    res.re = this->re - C.re;
    res.img = this->img - C.img;
    return res;
}

Complexe Complexe::operator-(double r) const
{
    Complexe res(0.0, 0.0);
    res.re = this->re - r;
    res.img = this->img;
    return res;
}

Complexe Complexe::operator*(Complexe C) const
{
    Complexe res(0.0, 0.0);
    res.re = this->re * C.re - this->img * C.img;
    res.img = this->re * C.img + this->img * C.re;
    return res;
}

Complexe Complexe::operator*(double r) const
{
    Complexe res(0.0, 0.0);
    res.re = this->re * r;
    res.img = this->img * r;
    return res;
}

Complexe Complexe::operator/(Complexe C) const
{
    if (C.re == 0 && C.img == 0)
    {
        cout << "On ne peut pas diviser par zero" << endl;
        return *this;
    }

    double den = C.re * C.re + C.img * C.img;

    Complexe res(0.0, 0.0);
    res.re = (this->re * C.re + this->img * C.img) / den;
    res.img = (this->img * C.re - this->re * C.img) / den;

    return res;
}

Complexe Complexe::operator/(double r) const
{
    if (r == 0)
    {
        cout << "On ne peut pas diviser par zero" << endl;
        return *this;
    }

    Complexe res(0.0, 0.0);
    res.re = this->re / r;
    res.img = this->img / r;
    return res;
}

Complexe& Complexe::operator=(const Complexe& C)
{
    this->re = C.re;
    this->img = C.img;
    return *this;
}

Complexe& Complexe::operator=(double r)
{
    this->re = r;
    this->img = 0;
    return *this;
}

Complexe& Complexe::operator+=(const Complexe& C)
{
    this->re += C.re;
    this->img += C.img;
    return *this;
}

Complexe& Complexe::operator+=(double r)
{
    this->re += r;
    return *this;
}

Complexe& Complexe::operator-=(const Complexe& C)
{
    this->re -= C.re;
    this->img -= C.img;
    return *this;
}

Complexe& Complexe::operator-=(double r)
{
    this->re -= r;
    return *this;
}

Complexe& Complexe::operator*=(const Complexe& C)
{
    double r = this->re * C.re - this->img * C.img;
    double i = this->re * C.img + this->img * C.re;

    this->re = r;
    this->img = i;

    return *this;
}

Complexe& Complexe::operator*=(double r)
{
    this->re *= r;
    this->img *= r;
    return *this;
}

Complexe& Complexe::operator/=(const Complexe& C)
{
    if (C.re == 0 && C.img == 0)
    {
        cout << "On ne peut pas diviser par zero" << endl;
        return *this;
    }

    double den = C.re * C.re + C.img * C.img;
    double r = (this->re * C.re + this->img * C.img) / den;
    double i = (this->img * C.re - this->re * C.img) / den;

    this->re = r;
    this->img = i;

    return *this;
}

Complexe& Complexe::operator/=(double r)
{
    if (r == 0)
    {
        cout << "On ne peut pas diviser par zero" << endl;
        return *this;
    }

    this->re /= r;
    this->img /= r;
    return *this;
}

Complexe& Complexe::operator++()
{
    this->re++;
    this->img++;
    return *this;
}

Complexe& Complexe::operator--()
{
    this->re--;
    this->img--;
    return *this;
}

bool Complexe::operator==(const Complexe& C) const
{
    if (this->re == C.re && this->img == C.img)
    {
        cout << "Les deux complexes sont egaux" << endl;
        return true;
    }
    else
    {
        cout << "Les deux complexes ne sont pas egaux" << endl;
        return false;
    }
}

bool Complexe::operator==(double r) const
{
    if (this->re == r && this->img == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Complexe::operator!=(const Complexe& C) const
{
    if (this->re != C.re || this->img != C.img)
    {
        cout << "Les deux complexes sont differents" << endl;
        return true;
    }
    else
    {
        cout << "Les deux complexes sont egaux" << endl;
        return false;
    }
}

bool Complexe::operator!=(double r) const
{
    if (this->re != r || this->img != 0)
    {
        cout << "Le complexe est different du reel" << endl;
        return true;
    }
    else
    {
        cout << "Le complexe est egal au reel" << endl;
        return false;
    }
}

bool Complexe::operator>(const Complexe& C) const
{
    double m1 = this->re * this->re + this->img * this->img;
    double m2 = C.re * C.re + C.img * C.img;

    if (m1 > m2)
    {
        cout << "Le module du complexe courant est superieur" << endl;
        return true;
    }
    else
    {
        cout << "Le module du complexe courant n'est pas superieur" << endl;
        return false;
    }
}

bool Complexe::operator>(double r) const
{
    double m = this->re * this->re + this->img * this->img;

    if (m > r * r)
    {
        cout << "Le module du complexe est superieur au module du reel" << endl;
        return true;
    }
    else
    {
        cout << "Le module du complexe n'est pas superieur au module du reel" << endl;
        return false;
    }
}

bool Complexe::operator<(const Complexe& C) const
{
    double m1 = this->re * this->re + this->img * this->img;
    double m2 = C.re * C.re + C.img * C.img;

    if (m1 < m2)
    {
        cout << "Le module du complexe courant est inferieur" << endl;
        return true;
    }
    else
    {
        cout << "Le module du complexe courant n'est pas inferieur" << endl;
        return false;
    }
}

bool Complexe::operator<(double r) const
{
    double m = this->re * this->re + this->img * this->img;

    if (m < r * r)
    {
        cout << "Le module du complexe est inferieur au module du reel" << endl;
        return true;
    }
    else
    {
        cout << "Le module du complexe n'est pas inferieur au module du reel" << endl;
        return false;
    }
}

bool Complexe::operator>=(const Complexe& C) const
{
    double m1 = this->re * this->re + this->img * this->img;
    double m2 = C.re * C.re + C.img * C.img;

    if (m1 >= m2)
    {
        cout << "Le module du complexe courant est superieur ou egal" << endl;
        return true;
    }
    else
    {
        cout << "Le module du complexe courant n'est pas superieur ou egal" << endl;
        return false;
    }
}

bool Complexe::operator>=(double r) const
{
    double m = this->re * this->re + this->img * this->img;

    if (m >= r * r)
    {
        cout << "Le module du complexe est superieur ou egal au module du reel" << endl;
        return true;
    }
    else
    {
        cout << "Le module du complexe n'est pas superieur ou egal au module du reel" << endl;
        return false;
    }
}

bool Complexe::operator<=(const Complexe& C) const
{
    double m1 = this->re * this->re + this->img * this->img;
    double m2 = C.re * C.re + C.img * C.img;

    if (m1 <= m2)
    {
        cout << "Le module du complexe courant est inferieur ou egal" << endl;
        return true;
    }
    else
    {
        cout << "Le module du complexe courant n'est pas inferieur ou egal" << endl;
        return false;
    }
}

bool Complexe::operator<=(double r) const
{
    double m = this->re * this->re + this->img * this->img;

    if (m <= r * r)
    {
        cout << "Le module du complexe est inferieur ou egal au module du reel" << endl;
        return true;
    }
    else
    {
        cout << "Le module du complexe n'est pas inferieur ou egal au module du reel" << endl;
        return false;
    }
}

void Complexe::affiher() const
{
    cout << "Le nbr complexe est: " << this->re;

    if (this->img >= 0)
        cout << "+";

    cout << this->img << "i" << endl;
}

Complexe::~Complexe()
{
}
