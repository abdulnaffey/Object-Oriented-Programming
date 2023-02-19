#include "Ride.h"
Ride::Ride(const Driver& p, const Rider& q, const char* pi, const char* des, const char* vehi, int trac, const char* cate, float fare, float km, float min, const char* pro, float dis, string start, string arri, int x)
{
	int l = 0;
	for (int i = 0; pi[i] != '\0'; i++)
	{
		l++;
	}
	pickup_location = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		pickup_location[i] = pi[i];
	}
	pickup_location[l] = '\0';


	l = 0;
	for (int i = 0; des[i] != '\0'; i++)
	{
		l++;
	}
	destination = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		destination[i] = des[i];
	}
	destination[l] = '\0';

	l = 0;
	for (int i = 0; vehi[i] != '\0'; i++)
	{
		l++;
	}
	vehicle_number = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		vehicle_number[i] = vehi[i];
	}
	vehicle_number[l] = '\0';


	l = 0;
	for (int i = 0; cate[i] != '\0'; i++)
	{
		l++;
	}
	category = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		category[i] = cate[i];
	}
	category[l] = '\0';


	l = 0;
	for (int i = 0; pro[i] != '\0'; i++)
	{
		l++;
	}
	promo_code = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		promo_code[i] = pro[i];
	}
	promo_code[l] = '\0';


	start_time = start;
	arrival_time = arri;

	tracking_id = trac;
	base_fare = fare;
	per_km_charges = km;
	per_min_charges = min;
	discount = dis;
	totalDistnace = x;
	d1 = p;
	r1 = q;
}
Ride::Ride()
{
	pickup_location = new char;
	pickup_location[0] = '\0';
	destination = new char;
	destination[0] = '\0';
	vehicle_number = new char;
	vehicle_number[0] = '\0';
	category = new char;
	category[0] = '\0';
	promo_code = new char;
	promo_code[0] = '\0';
	start_time = "0";
	
	arrival_time = "0";
	
	tracking_id = 0;
	base_fare = 0;
	per_km_charges = 0;
	per_min_charges = 0;
	discount = 0;
}
Ride::~Ride()
{
	if (pickup_location[0] == '\0')
	{
		delete pickup_location;
		delete destination;
		delete vehicle_number;
		delete category;
		delete promo_code;
	}
	else
	{
		delete[] pickup_location;
		delete[] destination;
		delete[] vehicle_number;
		delete[] category;
		delete[] promo_code;
	}
	pickup_location = nullptr;
	destination = nullptr;
	vehicle_number = nullptr;
	category = nullptr;
	promo_code = nullptr;
}
void  Ride::setDriver(const Driver& obj)
{
	d1 = obj;
}
void  Ride::setRider(const Rider& obj)
{
	r1 = obj;
}
void  Ride::setPickupLocation(const char* pi)
{
	int l = 0;
	for (int i = 0; pi[i] != '\0'; i++)
	{
		l++;
	}
	pickup_location = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		pickup_location[i] = pi[i];
	}
	pickup_location[l] = '\0';
}
void  Ride::setDestination(const char* des)
{
	int l = 0;
	for (int i = 0; des[i] != '\0'; i++)
	{
		l++;
	}
	destination = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		destination[i] = des[i];
	}
	destination[l] = '\0';
}
void  Ride::setVehicleNumber(const char* vehi)
{
	int l = 0;
	for (int i = 0; vehi[i] != '\0'; i++)
	{
		l++;
	}
	vehicle_number = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		vehicle_number[i] = vehi[i];
	}
	vehicle_number[l] = '\0';
}
void  Ride::setCategory(const char* cate)
{
	int l = 0;
	for (int i = 0; cate[i] != '\0'; i++)
	{
		l++;
	}
	category = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		category[i] = cate[i];
	}
	category[l] = '\0';
}
void  Ride::setPromoCode(const char* pro)
{
	int l = 0;
	for (int i = 0; pro[i] != '\0'; i++)
	{
		l++;
	}
	promo_code = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		promo_code[i] = pro[i];
	}
	promo_code[l] = '\0';
}
void  Ride::setStartTime(string start)
{
	start_time = start;
}
void  Ride::setArrivalTime(string arri)
{
	arrival_time = arri;
}
void  Ride::setTrackingId(int x)
{
	tracking_id = x;
}
void  Ride::setBaseFare(float x)
{
	base_fare = x;
}
void  Ride::setPerKmCharges(float x)
{
	per_km_charges = x;
}
void  Ride::setDiscount(float x)
{
	per_min_charges = x;
}
void  Ride::showTrip()const
{
	float perMinTotal = 1, perKmTotal = 0;
	r1.riderInfo();
	d1.driverInfo();
	cout << "\nDiscount : " << discount;
	
	int totalTime,arri,star;
	arri = stoi(arrival_time);
	star= stoi(start_time);
	/*cout << "\n" << arri;
	cout << "\n" << star;*/
	totalTime = arri - star;
	perMinTotal = per_min_charges * totalTime;
	cout << "\nFare of Time : " << perMinTotal;
	perKmTotal = per_km_charges * totalDistnace;
	cout << "\nFare of Distance : " << perKmTotal;
	cout << "\nTotal Fare : " << calculateBill();
}
void  Ride::setTotalDistance(int x)
{
	totalDistnace = x;
}
float Ride::calculateBill()const
{
	string temp = "pk8976";
	int totalTime;
	totalTime = stoi(arrival_time) - stoi(start_time);
	float perMinTotal = 0, perKmTotal, bill = 0;
	perMinTotal = per_min_charges * totalTime;

	perKmTotal = per_km_charges * totalDistnace;

	bill = base_fare;
	bill += perKmTotal;
	bill += perMinTotal;

	if (promo_code == temp)
	{
		bill += (bill * 0.25f);
	}
	return bill;
}