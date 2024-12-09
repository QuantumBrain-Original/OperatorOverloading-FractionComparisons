#include <iostream>

class Fraction
{
	private:
		int numerator_;
		int denominator_;

	public:
		double fract_represent()
		{
//			double tmp1 = static_cast<double>(numerator_);
//			double tmp2 = static_cast<double>(denominator_);
//			return tmp1 / tmp2;
			return static_cast<double>(numerator_) / static_cast<double>(denominator_); // привожу к типу double для более точного результата. Иначе получается, что f1(6, 12) = f2(6, 11).
		}

		bool operator==(Fraction &num)
		{
			return fract_represent() == num.fract_represent();
		}

		bool operator != (Fraction &num)
		{
			return !(*this == num);
		}

		bool operator > (Fraction &num)
		{
			return fract_represent() > num.fract_represent();
		}

		bool operator < (Fraction &num)
		{
			return num > *this;
		}

		bool operator >= (Fraction &num)
		{
			return !(*this < num);
		}
		bool operator <= (Fraction &num)
		{
			return !(*this > num);
		}

		Fraction(int numerator, int denominator)
		{
			numerator_ = numerator;
			denominator_ = denominator;
		}
};

int main() // Задача 1. Сравнения в дробях
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);
//	Fraction f1(6, 12);
//	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}