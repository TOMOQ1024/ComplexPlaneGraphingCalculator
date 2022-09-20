#pragma once

#include <Siv3D.hpp>

class Complex;

double cRe(Complex c);
double cIm(Complex c);
double cAbs(Complex c);
double cArg(Complex c);

class Complex {
private:
public:
	double re;
	double im;
	Complex() :re(0), im(0) {};
	Complex(const Complex& obj) = default;
	Complex(const double r, const double i)
		: re(r), im(i) {}

	// 表示
	void Print()
	{
		s3d::Print << re << (0 <= im ? U"+" : U"") << im;
	}



	Complex operator + (const Complex& c) const
	{
		double _re = this->re + c.re;
		double _im = this->im + c.im;
		return { _re, _im };
	}

	Complex operator - (const Complex& c) const
	{
		double _re = this->re - c.re;
		double _im = this->im - c.im;
		return { _re, _im };
	}

	Complex operator * (const Complex& c) const
	{
		double _re = this->re * c.re - this->im * c.im;
		double _im = this->re * c.im + this->im * c.re;
		return { _re, _im };
	}

	Complex operator / (const Complex& c) const
	{
		double rr = c.re * c.re + c.im * c.im;
		double _re = this->re * c.re - this->im * c.im;
		double _im = this->re * c.im + this->im * c.re;
		return { _re / rr, _im / rr };
	}

	Complex operator ^ (const double x) const
	{
		double r = pow(cAbs(*this), x);
		double th = x * cArg(*this);
		return {
			r * cos(th),
			r * sin(th)
		};
	}
};
