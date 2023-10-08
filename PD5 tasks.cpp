//PD 5

//TASK1
#include<iostream>
using namespace std;
double volume;

bool validation(string unit);
void pyramidVolume(double l, double w, double h);
double millimeters(string unit, double output);
double centimeters(string unit, double output);
double meters(string unit, double output);
double kilometers(string unit, double output);

main()

{
	double length, width, height, output, volume;
	string unit;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>>length;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>width;
	cout<<"Enter the height of the pyramid (in meters): ";
	cin>>height;
	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>>unit;
	if(validation(unit))
	{
		pyramidVolume(length, width, height);	
		output= millimeters(unit, output);
		output= centimeters(unit, output);
		output= meters( unit, output);
		output= kilometers(unit, output);


		cout<<"The volume of the pyramid is: "<<output <<" cubic " << unit;
	}
	else
	{
		cout<<"Invalid Input";
	}

	
}

bool validation(string unit)
{
	bool valid= false;
	if(unit=="meters")
	{
		valid=true;
	}
	if(unit=="millimeters")
	{
		valid=true;
	}
	if(unit=="centimeters")
	{
		valid=true;
	}
	if(unit=="kilometers")
	{
		valid=true;
	}
	return valid;

}

void pyramidVolume(double l, double w, double h)
{
	volume=(l*w*h)/3;
}
double millimeters(string unit, double output)
{	if(unit == "millimeters")
	{
		output= volume*1000;
	}
	return output;
}
double centimeters(string unit, double output )
{	if (unit == "centimeters")
	{
		output= volume*100;
	}
	return output;
}
double meters(string unit, double output )
{if (unit == "meters")
	{
		output=volume;
	}
	return output;
}
double kilometers(string unit, double output )
{	if (unit == "kilometers")
	{
		output= volume/1000;	
	}
	return output;
}




//TASK2
#include<iostream>
using namespace std;
void projectTimeCalculation(float neededHours,float daysFirmHas,float numberOfWorkers);

 float neededHours, daysFirmHas, numberOfWorkers, workDone, hoursLeft, extraHoursNeeded, restDays ;
main ()
{
    cout<<"Enter the needed hours: ";
    cin>>neededHours;

    cout<<"Enter the days that the firm has: ";
    cin>>daysFirmHas;

    cout<<"Enter the number of all workers: ";
    cin>>numberOfWorkers;

    projectTimeCalculation(neededHours, daysFirmHas, numberOfWorkers);
}
    

    void projectTimeCalculation(float neededHours,float daysFirmHas,float numberOfWorkers)
    {
        workDone= daysFirmHas*10*numberOfWorkers;
        restDays= workDone*0.1;
        extraHoursNeeded = workDone-restDays;
        if(neededHours>neededHours)
        {
            hoursLeft= extraHoursNeeded-neededHours;
            cout<<"Yes!" << hoursLeft <<" hours left."<<endl;
        }
        if(neededHours<=neededHours)
        {
            hoursLeft= neededHours-extraHoursNeeded;
             
            cout<<"Not enough time! " <<hoursLeft<<" hours needed."<<endl;
        }
    }

