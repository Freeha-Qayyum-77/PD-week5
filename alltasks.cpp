//PD 3
//Task1
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the number of sides of the polygon: ";
int sides;
cin>>sides;
int angle;
angle=(sides-2)*180;
cout<<"The sum of internal angles of a " <<sides <<"-sided polygon is: "<<angle <<" degrees";
}


//Task2
#include<iostream>
using namespace std;
main()
{
cout<<"Number of Minutes: ";
int min;
cin>>min;
min=min*60;
cout<<"Frames per Second: ";
int sec;
cin>>sec;
int total;
total=min*sec;
cout<<"Total Number of Frames: "<<total; 
}


//task3
#include<iostream>
using namespace std;
main()
{
cout<<"Enter Initial Velocity (m/s): ";
float initial;
cin>>initial;
cout<<"Enter Acceleration (m/s^2): ";
float acc;
cin>>acc;
cout<<"Enter Time (s): ";
int time;
cin>>time;
float final;
final=time*acc+initial;
cout<<"Final Velocity (m/s): "<<final;
}


//task4
#include<iostream>
using namespace std;
main()
{
cout<<"Enter Imposter Count: ";
float imposter;
cin>>imposter;
cout<<"Enter Player Count: ";
float player;
cin>>player;
float chances;
chances=100*(imposter/player);
cout<<"Chance of being an imposter: "<<chances<<"%"; 
}


//task5
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the Name of the Person: ";
string name;
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
float weight;
cin>>weight;
float days;
days=weight*15;
cout<<name<<" will need "<<days<<" days to lose "<<weight<<" kg of weight by following the doctor's suggestions";
}


//task6
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the size of the fertilizer bag in pounds: ";
float size;
cin>>size;
cout<<"Enter the cost of the bag: $";
float cost;
cin>>cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
float area;
cin>>area;
float costPerPound;
costPerPound=cost/size;
cout<<"Cost of fertilizer per pound: $"<<costPerPound<<endl;
float costPerSquare;
costPerSquare=cost/area;
cout<<"Cost of fertilizing per square foot: $"<<costPerSquare;
}


//task7
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the movie name: ";
string name;
cin>>name;
cout<<"Enter the adult ticket price: $";
int adult;
cin>>adult;
cout<<"Enter the child ticket price: $";
int child;
cin>>child;
cout<<"Enter the number of adult tickets sold: ";
int adultTicketSold;
cin>>adultTicketSold;
cout<<"Enter the number of child tickets sold: ";
int childTicketSold;
cin>>childTicketSold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
int charity;
cin>>charity;
cout<<endl;
cout<<"Movie: "<<name<<endl;
int total;
total=(adult*adultTicketSold)+(child*childTicketSold);
cout<<"Total amount generated from ticket sales: $"<<total<<endl; 
int donation;
donation=(total*charity/100);
cout<<"Donation to charity (" <<charity << "%): $" <<donation<<endl;
int remaining;
remaining=total-donation;
cout<<"Remaining amount after donation: $"<<remaining;
}


//task8
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter vegetable price per kilogram (in coins): ";
	float vegPrice;
	cin>>vegPrice;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruitPrice;
	cin>>fruitPrice;
	cout<<"Enter total kilograms of vegetables: ";
	int vegKg;
	cin>>vegKg;
	cout<<"Enter total kilograms of fruits: ";
	int fruitKg;
	cin>>fruitKg;
	float totalVeg;
	totalVeg=vegPrice*vegKg;
	float totalFruit;
	totalFruit=fruitPrice*fruitKg;
	float earning;		
	earning=totalVeg+totalFruit;
	earning=earning/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<earning;
	
}



//task9
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter a 4-digit number: ";
	int num;
	cin>>num;
	int a;
	a=num%10;
	num=num/10;
	int b;
	b=num%10;
	num=num/10;
	int c;
	c=num%10;
	num=num/10;
	int sum;
	sum=num+a+b+c;
	cout<<"Sum of the individual digits: "<<sum;	

}
//task10
#include<iostream>
using namespace std;
main()
{
	cout<<"Number 1: ";
	int one;
	cin>>one;
	cout<<"Number 2: ";
	int two;
	cin>>two;
	cout<<"Number 3: ";
	int three;
	cin>>three;
	cout<<"Number 4: ";
	int four;
	cin>>four;
	cout<<"Number 5: ";
	int five;
	cin>>five;
	cout<<"Number 6: ";
	int six;
	cin>>six;
	cout<<"Number 7: ";
	int seven;
	cin>>seven;
	cout<<"Number 8: ";
	int eight;
	cin>>eight;
	cout<<"Number 9: ";
	int nine;
	cin>>nine;
	cout<<"Number 10: ";
	int ten;
	cin>>ten;
	cout<<"Number 11: ";
	int eleven;
	cin>>eleven;
	cout<<"Number 12: ";
	int twelve;
	cin>>twelve;
	cout<<"Number 13: ";
	int thirteen;
	cin>>thirteen;
	cout<<"Number 14: ";
	int fourteen;
	cin>>fourteen;
	cout<<"Number 15: ";
	int fifteen;
	cin>>fifteen;
	int add;
	add=one+two+three+four+five;
	int mul;
	mul=six*seven*eight*nine*ten;
	int sub;
	sub=eleven-twelve-thirteen-fourteen-fifteen;
	int total;
	total=add+mul;
	total=total-sub;
	cout<<"The final result is: "<<total;
}


//task11
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the person's age: ";
int age;
cin>>age;
cout<<"Enter the number of times they've moved: ";
int move;
cin>>move;
int years;
years=age/(move+1);
cout<<"Average number of years lived in the same house: "<<years;
 }


//task12
#include<iostream>	
using namespace std;
main()
{
	cout<<"Number of square meters you can paint: ";
	int meters;
	cin>>meters;
	cout<<"Width of the single wall (in meters): ";
	int width;
	cin>>width;
	cout<<"Height of the single wall (in meters): ";
	int height;
	cin>>height;
	int walls;
	walls=width*height;
	walls=meters/walls;
	cout<<"Number of walls you can paint: "<<walls;
}


//task13
#include<iostream>
using namespace std;
main()
{
	int sum=0;
	int num;
	cout <<"num= ";
	cin>>num;
	sum=sum+num;
	cout <<"num= ";
	cin>>num;
	sum=sum+num;
	cout <<"num= ";
	cin>>num;
	sum=sum+num;
	cout <<"num= ";
	cin>>num;
	sum=sum+num;
	cout <<"num= ";
	cin>>num;
	sum=sum+num;
	cout<<"Sum is "<<sum;

}


//PD 4
//task1
#include<iostream>
using namespace std;
void IsEqual(int a, int b);

main()
{
	int n1,n2;
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	IsEqual(n1, n2);
}

void IsEqual(int a, int b)
{
	if(a==b)
	    cout<<"true";
	else
	    cout<<"false";
}




//task2
#include<iostream>
using namespace std;
void Reverse(string a);

main()
{
	string a;
	cout<<"Enter 'true' or 'false': ";
	cin>>a;
	Reverse(a);
}

void Reverse(string a)

{
	if(a=="true")
	   cout<<"false";
	if(a=="false")
	   cout<<"true";
}



//task3
#include<iostream>
using namespace std;
void Discount(string name, float price);
main()
{
	string name;
	float price;
   while(true)
	{	
	cout<<"Enter the country's name: "  <<endl;
	cin>>name;
	cout<<"Enter the ticket price in dollars: $" <<endl;
	cin>>price;
	Discount(name, price); 
        }
}

void Discount(string name, float price)
{
	if(name=="Pakistan")
	{
		price= price-(price*5/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}    
	if(name=="Ireland")
	{ 
		price= price-(price*10/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}
	if(name=="India")
	{ 
		price= price-(price*20/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}
	if(name=="England")
	{ 
		price= price-(price*30/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}
	if(name=="Canada")
	{ 
		price= price-(price*45/100);
		cout<<"Final ticket price after discount: $"<<price <<endl;
	}
}




//task4
#include<iostream>
using namespace std;
void checkSpeed(int speed);

main()
{
	int speed;
	cout<<"Speed: ";
	cin>>speed;
	checkSpeed(speed);
}
void checkSpeed(int speed)
{ 
	int x=100;
	if(speed>x)
		cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	else
		cout<<"Perfect! You're going good.";
}


//task5
#include<iostream>
using namespace std;
void possibleBonus(int a, int b);

main()
{
	int position;
	int friends_position;
	cout<<"Enter your position: ";
	cin>>position;
	cout<<"Enter your friend's position: ";
	cin>>friends_position;	
	possibleBonus(position, friends_position );
}

void possibleBonus(int a, int b)
{
		
	if(b-a <= 6)
		cout << "true";
	else
		cout << "false";
}



//task6
#include<iostream>
using namespace std;
void longestTime(int a, int b);

main(){
	int hours, minutes;
	cout<<"Enter the number of hours: ";
	cin>>hours;
	cout<<"Enter the number of minutes: ";
	cin>>minutes;
	longestTime(hours, minutes);
}

void longestTime(int a, int b)
{
	if(a*60< b)
		cout<<b;
	if(a*60>b)
		cout<<a;
}



//task7
#include<iostream>
using namespace std;
void flowerShop(float redRose, float whiteRose, float tulip);

main()
{
	float redRose, whiteRose, tulip;
	cout << "Red Rose: ";
	cin >> redRose;
	cout << "White Rose: ";
	cin >> whiteRose;
	cout << "Tulips: ";
	cin >> tulip;
	flowerShop(redRose, whiteRose, tulip);
}

void flowerShop(float redRose, float whiteRose, float tulip)
{	
	float original;
	original= redRose*2 + whiteRose*4.1 +tulip*2.5;
	cout << "Original Price: $"<<original<<endl;
	float discount;

	if(original>200)
	{	
		discount= original-(original*0.2);
		cout<<"Price after Discount: $"<<discount;
	}
	if(original<=200) 
		cout << "No discount applied.";
}



//task8
#include<iostream>
using namespace std;
void pet(int holidays);

main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}

void pet(int holidays)
{	
	int workingdays,timeforgames,normdifference,norm_difference;
	workingdays=365-holidays;
	timeforgames=workingdays*63+holidays*127;
	normdifference= 30000-timeforgames;
	norm_difference=timeforgames-30000;
	
	if(timeforgames<30000)
{	
		int hours, mins;
		hours=normdifference/60;
		mins= normdifference%60;
		cout<<"Tom sleeps well"<< endl;
		cout<<hours<<" hours and "<<mins<<" minutes less for play";
}
	if(timeforgames>30000)
{
		int hour, min;
		hour= norm_difference/60;
		min= norm_difference%60;
		cout<<"Tom will run away"<<endl;
		cout<<hour<<" hours and "<<min<<" minutes for play";
}
}

	
	


//task9
#include<iostream>
using namespace std;
void tpChecker(int num1, int num2);

main()
{
	int people, rolls;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>rolls;
	tpChecker(people, rolls);
}

void tpChecker(int a, int b)
{	
	int days;
		days=(500*b)/(57*a);
	if(days >= 14)
		cout<<"Your TP will last "<<days<<" days, no need to panic!";
	if(days < 14)
		cout<<"Your TP will only last "<<days<<" days, buy more!";
}



//UAMS
#include <iostream>
using namespace std;

void header();
void calculateaggregate(string name,float inter_marks,float matric_marks,float ecat_marks);
void comparemarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2);
main()
{	header();
	char x;
	string name,nameStd1,nameStd2;
	float inter_marks,matric_marks,ecat_marks,ecatMarksStd2,ecatMarksStd1;
	cout<< "Enter '1' for calculating aggregate: "<<endl;
	cout<<  "Enter '2' for comparing ECAT marks: " ;
	cin >> x ;

	if(x=='1')
	{	
		calculateaggregate(name,inter_marks,matric_marks,ecat_marks);
	}
	if(x=='2')
	{
		comparemarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
	}
}
void header()
{	
	cout << "********************************************************************************************************************************************************************************************************" << endl;
	cout << "* ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- *" << endl;	
	cout << "* |                                                                                                                                                                                                  | *" << endl;
	cout << "* |           ##     ## ###     ## #### ##     ## ###### #######   ######  #### ######## ##      ##     ###    #######   ##        ## ####  ######   ######  ####   #######   ###     ##             | *" << endl;
	cout << "* |           ##     ## ####    ##  ##  ##     ## ##      ##   ## ##    ##  ##     ##     ##    ##     ## ##   ##    ##  ###      ###  ##  ##    ## ##    ##  ##   ##     ##  ####    ##             | *" << endl;
	cout << "* |           ##     ## ## ##   ##  ##  ##     ## ##      ##   ## ##        ##     ##      ##  ##     ##   ##  ##     ## ## ##  ## ##  ##  ##       ##        ##  ##       ## ## ##   ##             | *" << endl;
	cout << "* |           ##     ## ##  ##  ##  ##  ##     ## ######  ######   ######   ##     ##       ####     ######### ##     ## ##  ####  ##  ##   ######   ######   ##  ##       ## ##  ##  ##             | *" << endl;
	cout << "* |           ##     ## ##   ## ##  ##   ##   ##  ##      ## ##         ##  ##     ##        ##      ##     ## ##     ## ##   ##   ##  ##        ##       ##  ##  ##       ## ##   ## ##             | *" << endl;
	cout << "* |           ##     ## ##    ####  ##    ## ##   ##      ##  ##  ##    ##  ##     ##        ##      ##     ## ##    ##  ##        ##  ##  ##    ## ##    ##  ##   ##     ##  ##    ####             | *" << endl;
	cout << "* |            #######  ##     ### ####    ###    ###### ###   ##  ######   ##     ##        ##      ##     ## #######   ##        ## ####  ######   ######  ####   #######   ##     ###             | *" << endl;
	cout << "* |                                                                                                                                                                                                  | *" << endl;
	cout << "* |  ##        ##    ###    ###     ##    ###    ###     ##   ######  ###### ##        ## ###### ##        ## ###### ###     ## ########    ######  ##      ##  ######  ######## ###### ##       ##  | *" << endl;
	cout << "* |  ###      ###   ## ##   ####    ##   ## ##   ####    ##  ##    ## ##     ###      ### ##     ###      ### ##     ####    ##    ##      ##    ##  ##    ##  ##    ##    ##    ##     ###     ###  | *" << endl;
	cout << "* |  ## ##  ## ##  ##   ##  ## ##   ##  ##   ##  ## ##   ## ##        ##     ## ##  ## ## ##     ## ##  ## ## ##     ## ##   ##    ##      ##         ##  ##   ##          ##    ##     ## ## ## ##  | *" << endl;
	cout << "* |  ##  ####  ## ######### ##  ##  ## ######### ##  ##  ## ##   #### ###### ##  ####  ## ###### ##  ####  ## ###### ##  ##  ##    ##       ######     ####     ######     ##    ###### ##  #### ##  | *" << endl;
	cout << "* |  ##   ##   ## ##     ## ##   ## ## ##     ## ##   ## ## ##     ## ##     ##   ##   ## ##     ##   ##   ## ##     ##   ## ##    ##            ##     ##           ##    ##    ##     ##   ##  ##  | *" << endl;
	cout << "* |  ##        ## ##     ## ##    #### ##     ## ##    ####  ##    ## ##     ##        ## ##     ##        ## ##     ##    ####    ##      ##    ##     ##     ##    ##    ##    ##     ##       ##  | *" << endl;
	cout << "* |  ##        ## ##     ## ##     ### ##     ## ##     ###   ######  ###### ##        ## ###### ##        ## ###### ##     ###    ##       ######      ##      ######     ##    ###### ##       ##  | *" << endl;
	cout << "* |                                                                                                                                                                                                  | *" << endl;
	cout << "* ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- *" << endl;
	cout << "********************************************************************************************************************************************************************************************************" << endl;
}
void calculateaggregate(string name,float inter_marks,float matric_marks,float ecat_marks)
{
	cout << "Enter the student's name: " ;
	cin >> name ;
	cout << "Enter matriculation marks (out of 1100): " ;
	cin >> matric_marks ;
	cout << "Enter intermediate marks (out of 550): " ;
	cin >> inter_marks ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecat_marks ;
	;
	cout << "Aggregate score for "<< name << " in UET is: " << (matric_marks/1100)*30+(inter_marks/550)*30+(ecat_marks/400)*40 << "%";
}
void comparemarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2)
{
	cout << "Enter the student's name: " ;
	cin >> nameStd1 ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecatMarksStd1 ;
	cout << "Enter the student's name: " ;
	cin >> nameStd2 ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecatMarksStd2;
	if(ecatMarksStd1>ecatMarksStd2)
	{
		cout << nameStd1 << " has more marks in ECAT than " << nameStd2 ;
	}
	if(ecatMarksStd1<ecatMarksStd2)
	{
		cout << nameStd2 << " has more marks in ECAT than " << nameStd1 ;
	}
	if(ecatMarksStd1==ecatMarksStd2)
	{
		cout << nameStd1 << " and " << nameStd2 << " have equal marks in ECAT." ;
	}
}







//PF 3
//task1
#include<iostream>
using namespace std;
main()
{

cout<<"Enter your name: ";
string name;
cin>>name;
cout<<"Enter your roll number: ";
int roll_no;
cin>>roll_no;
cout<<"Enter your aggregate: ";
float agg;
cin>>agg;
cout<<"Enter your section: ";
char sec;
cin>>sec;
cout <<"Student Information:"<<endl;
cout <<"Name: "<< name << endl;
cout <<"Roll number: "<< roll_no << endl;
cout <<"Aggregate: "<< agg << endl;
cout <<"Section: "<<sec << endl;
}



//task2
#include<iostream>
using namespace std;
main()
{
cout<<"Enter weight in pounds: ";
float weight;
cin>>weight;
int result;
result=weight*0.45;
cout<<weight<<" pounds"<<" is equal to "<<result<<" kilograms.";
}

//task3
#include<iostream>
using namespace std;
main()
{ 
cout<<"Enter the length of the rectangle: ";
int length;
cin>>length;
cout<<"Enter the width of the rectangle: "; 
int width;
cin>>width;
int area;
area=length*width;
cout<<"The area of the rectangle is: "<< area;
}


//task4
#include<iostream>
using namespace std;
main(){
cout<<"Enter the charge (Q) in Coulombs: ";
float q;
cin>>q;
cout<<"Enter the time (t) in seconds: ";
int t;
cin>>t;
float current;
current=q/t;
cout<<"The current (I) is: "<<current<<" Amperes";

}



//task5
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the student's name: ";
string name;
cin>>name;
cout<<"Enter matriculation marks (out of 1100): ";
float matric;
cin>>matric;
cout<<"Enter intermediate marks (out of 550): ";
float inter;
cin>>inter;
cout<<"Enter Ecat marks (out of 400): ";
float ecat;
cin>>ecat;
ecat = (ecat * 0.5/400);
matric = (matric*0.1/1100);
inter = (inter*0.4/550);
float agg;
agg = (matric + inter + ecat)*100;
cout<<"Aggregate score for "<<name<<" in UET is: "<< agg << "%";
}



//task6
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the size in megabytes (MB): ";
float mb;
cin>>mb;
float bit;
bit=mb*1024*1024*8;
cout<<mb<<" MB is equivalent to "<<bit<<" bits.";

}



//task7
a#include<iostream>
using namespace std;
main()
{
cout<<"Enter the number of hours: ";
int hours;
cin>>hours;
int sec;
sec=hours*60*60;
cout<<hours <<" hours is equivalent to "<<sec<<" seconds.";
}



//task8
#include<iostream>
using namespace std;
main()
{
cout<<"Enter voltage (in volts): ";
int v;
cin>>v;
cout<<"Enter current (in amperes): ";
int i;
cin>>i;
int p;
p=v*i;
cout<<"The Power is "<<p<<" watts.";
}



//task9
#include<iostream>
using namespace std;
main(){
cout<<"Enter your age in years: ";
int age;
cin>>age;
int days;
days=age*365;
cout<<"Your age in days is approximately "<<days<<" days.";	
}



//taksk10
#include<iostream>
using namespace std;
main(){
cout<<"Enter the name of the cricket team: ";
string name;
cin>>name;
cout<<"Enter the number of wins: ";
int win;
cin>>win;
cout<<"Enter the number of draws: ";
int draws;
cin>> draws;
cout<<"Enter the number of losses: ";
int losses;
cin >>losses;
int points;
points= (win*3)+(draws*1)+(losses*0);
cout<<name <<" has obtained "<<points<<" points in the Asia Cup Tournament.";
}


//task11
#include<iostream>
using namespace std;
main()
{
cout<<"Enter the current world population: ";
int population;
cin >> population;
cout<<"Enter the monthly birth rate (number of births per month): ";
int month;
cin >> month;
int output;
output= population+(month*30*12);
cout << "The population in three decades will be: "<<output;
}



//PF 4
//task1
a#include<iostream>
using namespace std;
void calculatefuel(float a);

main()
{
float dis;
cout<<"Enter the distance: ";
cin>>dis;
calculatefuel(dis);

}

void calculatefuel(float a)
{
a=a*10;
cout<<"Fuel needed: "<<a;
}



//task2
#include<iostream>
using namespace std;
void inchestoFeet(float a);

main()
{
float inch;
cout<<"Enter the measurement in inches: ";
cin>>inch;
inchestoFeet(inch);

}
void inchestoFeet(float a)
{
float b;
b=a/12;
cout<<"Equivalent in feet: "<<b;
}



//task3
#include<iostream>
using namespace std;
void howManyStickers(int a);

main()
{
int side;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>side;
howManyStickers(side);
}

void howManyStickers(int a)
{
int stickers;
stickers=a*a*6;
cout<<"Number of stickers needed: "<<stickers;
}


//task4
#include<iostream>
using namespace std;
void addition(int a,int b);
void subtraction(int a,int b);
void multiplication(int a,int b);
void division(int a,int b);

main()
	{
	int n1,n2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>n1;
	cout<<"Enter 2nd number: ";
	cin>>n2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
if(op=='+')
	addition(n1,n2);
if(op=='-')
	subtraction(n1,n2);
if(op=='*')
	multiplication(n1,n2);
if(op=='/')
	division(n1,n2);
}

void addition(int a,int b)
	{
	int sum=a+b;
	cout<<"Addition: "<<sum;
	}
void subtraction(int a,int b)
	{
	int minus=a-b;
	cout<<"Subtraction: "<<minus;
	}
void multiplication(int a,int b)
	{
	int multiply=a*b;
	cout<<"Multiplication: "<<multiply;
	}
void division(int a,int b)
	{
	int divide=a/b;
	cout<<"Division: "<<divide;
	}



//task5
#include<iostream>
using namespace std;
void Vote(int a);

main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	Vote(age);
}
void Vote(int a)
{
if(a>=18)
	cout<<"You are eligible to vote.";
else
	cout<<"You are not eligible to vote.";

}


//task6
#include<iostream>
using namespace std;
void passOrFail(int a);

main()
{
	int num;
	cout<<"Enter your score: ";
	cin>>num;
	passOrFail(num);
}
void passOrFail(int a)
{
if(a>50)
	cout<<"Pass";
else
	cout<<"Fail";
}



//task7
#include<iostream>
using namespace std;
void evenOrOdd(int a);

main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	evenOrOdd(num);
}

void evenOrOdd(int a)

{ 
if(a%2==0)
	cout<<"Number "<<a <<" is even";
else 
	cout<<"Number "<<a <<" is odd";
}
	


//task8
#include<iostream>
using namespace std;
void calculatePayableAmount(string a, float b);

main()
{
	string day;
	float amount;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	calculatePayableAmount(day, amount);

}

void calculatePayableAmount(string a, float b)

{
if(a=="Sunday","sunday")
	{b=b-(b*10/100);
	cout<<"Payable Amount: $"<<b;}

else
	cout<<"Payable Amount: $";
	
}


//task9
#include<iostream>
using namespace std;
void calculatefuel(float a);

main()
{
	float dis;
	cout<<"Enter the distance: ";
	cin>>dis;
	calculatefuel(dis);
	
}

void calculatefuel(float a)
{
	a=a*10;
	cout<<"Fuel needed: "<<a;
	
}















