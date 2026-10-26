#pragma once
class Complexe
{
private:
    double re;
    double img;

public:
    Complexe(double, double);
    Complexe(const Complexe&);

    Complexe operator+(Complexe) const;
    Complexe operator+(double) const;

    Complexe operator-(Complexe) const;
    Complexe operator-(double) const;

    Complexe operator*(Complexe) const;
    Complexe operator*(double) const;

    Complexe operator/(Complexe) const;
    Complexe operator/(double) const;

    Complexe& operator=(const Complexe&);
    Complexe& operator=(double);

    Complexe& operator+=(const Complexe&);
    Complexe& operator+=(double);

    Complexe& operator-=(const Complexe&);
    Complexe& operator-=(double);

    Complexe& operator*=(const Complexe&);
    Complexe& operator*=(double);

    Complexe& operator/=(const Complexe&);
    Complexe& operator/=(double);

    Complexe& operator++();
    Complexe& operator--();

    bool operator==(const Complexe&) const;
    bool operator==(double) const;

    bool operator!=(const Complexe&) const;
    bool operator!=(double) const;

    bool operator>(const Complexe&) const;
    bool operator>(double) const;

    bool operator<(const Complexe&) const;
    bool operator<(double) const;

    bool operator>=(const Complexe&) const;
    bool operator>=(double) const;

    bool operator<=(const Complexe&) const;
    bool operator<=(double) const;

    void affiher() const;

    ~Complexe();
};
