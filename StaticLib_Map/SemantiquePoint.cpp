#include "pch.h"
#include "SemantiquePoint.h"
using namespace Point;
using namespace Map;
SemantiquePoint::SemantiquePoint(float a, float b, int c, string s): GeoPoint(a,b,c)
{
	this->semantic = s;
}

SemantiquePoint::SemantiquePoint(SemantiquePoint& S):GeoPoint(S)
{
	this->semantic = S.semantic;
}

SemantiquePoint& SemantiquePoint::operator=(const SemantiquePoint& S)
{
	if (this != &S)
	{
		this->GeoPoint::operator=(S);
		this->semantic = S.semantic;
	}
	return *this;
	// TODO: insérer une instruction return ici
}

void SemantiquePoint::print()const
{
	GeoPoint::print();
	cout << "," << this->semantic;
}
