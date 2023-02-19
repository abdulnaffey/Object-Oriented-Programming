#include "Ride.h"

int main()
{

	//Driver class

	Driver d1, d2("Abdullah", "03184656776", "Johar Town", "35202", 5, 4.6), d3;
	d3 = d1;
	d1.setName("Yasim");
	d1.setContact_Number("03244911666");
	d1.setAddress("Badami bagh");
	d1.setCnic("35789");
	d1.setRating(4);
	d1.setComplete(10);

	cout << "\t\tUsing Getters for Driver class d1: \n";
	cout << "\nName : " << d1.getName();
	cout << "\nContact Number : " << d1.getContact_Number();
	cout << "\nAddress : " << d1.getAddress();
	cout << "\nCNIC : " << d1.getCnic();
	cout << "\nTrips completed : " << d1.getComplete();
	cout << "\nDrivers rating : " << d1.getRating();

	

	cout << "\n\n\t\tUsing driverInfo for Driver class d2: \n";
	d2.driverInfo();


	cout << "\n\n\t\tUsing driverInfo for Driver class d3: \n";
	d3.driverInfo();



	//Rider class


	Rider r1, r2("Khizar", "03018282190", 4, 2), r3;
	r3 = r1;
	r1.setName("hamid");
	r1.setContact("030423648");
	r1.setRating(2);
	r1.setCancelled(10);

	cout << "\n\n\t\tUsing Getters for Rider class r1: \n";
	cout << "\nName : " << r1.getName();
	cout << "\nContact Number : " << r1.getContact();
	cout << "\nTrips cancelled : " << r1.getCancelled();
	cout << "\nDrivers rating : " << r1.getRating();


	cout << "\n\n\t\tUsing riderInfo for Rider class r2: \n";
	r2.riderInfo();

	

	cout << "\n\n\t\tUsing riderInfo for Rider class r3: \n";
	r3.riderInfo();






	//Ride class

	Ride p1, p3;
	Ride p2(d2, r2, "Shad bagh", "Gajumata", "lep 3666", 589647, "UberX", 100.0, 15.16, 8.54, "sedif", 0.0, "1620", "1658", 5);
	p1.setDriver(d1);
	p1.setRider(r1);
	p1.setPickupLocation("Gulbegr");
	p1.setDestination("PU new Campus");
	p1.setVehicleNumber("LEO 1051");
	p1.setCategory("UberX");
	p1.setPromoCode("fsjdfg");
	p1.setStartTime("1245");
	p1.setArrivalTime("1320");
	p1.setTrackingId(2145);
	p1.setBaseFare(80);
	p1.setPerKmCharges(15.6);
	p1.setDiscount(32);
	p1.setTotalDistance(65);
	
	cout << "\n\n\t\tUsing showTrip for Ride class p1: \n";
	p1.showTrip();

	cout << "\n\n\t\tUsing showTrip for Ride class p2: \n";
	p2.showTrip();


	cout << "\n\n\t\tUsing showTrip for Ride class p3: \n";
	p3.showTrip();

}