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

