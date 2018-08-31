#include <stdio.h>
#define MaxDegree 10

typedef struct {
	int CoefArray[MaxDegree];
	int HighPower;
} * Polynomial;

void ZeroPolynomial(Polynomial Poly)
{
	for (int i = 0; i < MaxDegree; ++i)
		Poly->CoefArray[i] = 0;
	Poly->HighPower = 0;	
}

void AddPolynomial(const Polynomial Poly1, const Polynomial Poly2, Polynomial PolySum)
{
	int i;

	ZeroPolynomial(PolySum);
	PolySum->HighPower = max(Poly1->HighPower, Poly2->HighPower);

	for (int i = 0; i < MaxDegree; ++i)
	{
		PolySum->CoefArray[i] = Poly1->CoefArray[i] + Poly2->CoefArray[i];
	}
}

void MultiPolynomial(Polynomial Poly1, Polynomial Poly2, Polynomial, PolyMulti)
{
	int i, j;
	ZeroPolynomial(PolyMulti);
	PolyMulti->HighPower = Poly1->HighPower + Poly2->HighPower;

	for (int i = 0; i < MaxDegree; ++i)
		for (int j = 0; j < MaxDegree; ++j)
			PolyMulti->CoefArray[i+j] += Poly1->CoefArray[i] * Poly2->CoefArray[j];
}



