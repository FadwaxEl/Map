#include "pch.h"
#include <iostream>
#include "GeoPoint.h"
using namespace std;
using namespace Map;


GeoPoint::GeoPoint(float lap , float lng, int code)
{
	this->lap = lap;
	this->lng = lng;
	this->code = code;
}

GeoPoint::GeoPoint(GeoPoint& P)
{
	this->code = P.code;
	this->lap = P.lap;
	this->lng = P.lng;
}

GeoPoint& GeoPoint::operator=(const GeoPoint& P)
{
	if (this != &P)
	{
		this->code = P.code;
		this->lap = P.lap;
		this->lng = P.lng;
	}
	return *this;

	// TODO: insérer une instruction return ici
}

void Map::GeoPoint::print() const
{
	cout << "{" << this->lng << "," << this->lap << "," << this->code << "}" << endl;
}

