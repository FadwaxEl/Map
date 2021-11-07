#pragma once
#include "GeoPoint.h"
#include <iostream>
using namespace std;
using namespace Map;
namespace Point {
	class SemantiquePoint : public GeoPoint
	{
	private:
		string semantic;
	public:
		SemantiquePoint(float, float, int, string);
		SemantiquePoint(SemantiquePoint&);
		SemantiquePoint& operator=(const SemantiquePoint&);
		void print() const;


	};
};
