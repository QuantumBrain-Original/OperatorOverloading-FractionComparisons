#include <iostream>

class Fraction
{
	private:
		int numerator_;
		int denominator_;

	public:
		bool operator==(Fraction &num)
		{
			return numerator_ * num.denominator_ == denominator_ * num.numerator_;
		}

		bool operator != (Fraction &num)
		{
			return !(*this == num);
		}

		bool operator > (Fraction &num)
		{
			return numerator_ * num.denominator_ > denominator_ * num.numerator_;
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