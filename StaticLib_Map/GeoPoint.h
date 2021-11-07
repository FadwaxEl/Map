#pragma once
namespace Map {
	class GeoPoint
	{
	private:
		float lap, lng;
		int code;
	public:
		GeoPoint(float, float, int);
		GeoPoint(GeoPoint&);
		GeoPoint& operator=(const GeoPoint&);
		void print()const;
	};
};
