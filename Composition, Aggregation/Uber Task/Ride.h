#include <iostream>
#include <string>
#include "Rider.h"
#include "Driver.h"
using namespace std;
class Ride
{

	Driver  d1;
	Rider   r1;
	int     totalDistnace;
	char* pickup_location;
	char* destination;
	char* vehicle_number;
	int     tracking_id;
	char* category;
	float   base_fare;
	float   per_km_charges;
	float   per_min_charges;
	char* promo_code;
	float   discount;
	string  start_time;
	string  arrival_time;


public:
	~Ride();
	Ride();
	Ride(const Driver&, const Rider&, const char*, const char*, const char*, int, const char*, float, float, float, const char*, float, string, string, int);
	void   setDriver(const Driver&);
	void   setRider(const Rider&);
	void   setPickupLocation(const char*);
	void   setDestination(const char*);
	void   setVehicleNumber(const char*);
	void   setCategory(const char*);
	void   setPromoCode(const char*);
	void   setStartTime(string);
	void   setArrivalTime(string);
	void   setTrackingId(int);
	void   setBaseFare(float);
	void   setPerKmCharges(float);
	void   setTotalDistance(int);
	void   setDiscount(float);
	void   showTrip()const;
	float  calculateBill()const;
};

