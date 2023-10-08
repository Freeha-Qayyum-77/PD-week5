#include<iostream>
using namespace std;

void taxCalculator(char vehicleCode, float priceOfVehicle, float taxAmount, float finalPrice );

main()
{
    char vehicleCode;
    float priceOfVehicle, finalPrice, taxAmount;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>vehicleCode;
    cout<<"Enter the price of the vehicle: $";
    cin>>priceOfVehicle;

    taxCalculator(vehicleCode, priceOfVehicle, taxAmount, finalPrice );
    
}

void taxCalculator(char vehicleCode, float priceOfVehicle, float taxAmount, float finalPrice )
{
    if(vehicleCode=='M')
        {
            taxAmount= (priceOfVehicle*0.06);
            finalPrice=priceOfVehicle+taxAmount;
		cout<<"The final price of a vehicle of type "<< vehicleCode<<" after adding the tax is "<< "$" <<finalPrice;
        }
    if(vehicleCode=='E')
        {
            taxAmount= (priceOfVehicle*0.08);
            finalPrice=priceOfVehicle+taxAmount;
		cout<<"The final price of a vehicle of type "<< vehicleCode<<" after adding the tax is "<< "$" <<finalPrice;
        }
    if(vehicleCode=='S')
        {
            taxAmount= (priceOfVehicle*0.1);
            finalPrice=priceOfVehicle+taxAmount;
		cout<<"The final price of a vehicle of type "<< vehicleCode<<" after adding the tax is "<< "$" <<finalPrice;
        }
        if(vehicleCode=='V')
        {
            taxAmount= (priceOfVehicle*0.12);
            finalPrice=priceOfVehicle+taxAmount;
		cout<<"The final price of a vehicle of type "<< vehicleCode<<" after adding the tax is "<< "$" <<finalPrice;
        }
        if(vehicleCode=='T')
        {
            taxAmount= (priceOfVehicle*0.15);
            finalPrice=priceOfVehicle+taxAmount;
		cout<<"The final price of a vehicle of type "<< vehicleCode<<" after adding the tax is "<< "$" <<finalPrice;
        }
        
}

