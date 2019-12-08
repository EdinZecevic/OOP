#include <iostream>
#include <string.h>

using namespace std;

class Date{
public:
	int month;
	int day;
	int year;
	static string Months[13];

Date(){
	month = 1;
	day = 1;
	year = 2019;
}


Date(int mm, int dd, int yy){
	if(isValidDate(mm, dd, yy)){
		month = mm;
		day = dd;
		year = yy;
}
	else{
	cout<<"Invalid Date!";
	Date();
}
}


void setDate(int mm, int dd, int yy){
	if(isValidDate(mm, dd, yy)){
		month = mm;
		day = dd;
		year = yy;
}
else{
	cout<<"Invalid Date!";
	Date();
}
}



bool isValidDate(int mm, int dd, int yy){
	if (yy > 9999 || yy < 2019)
		return false;
	
	if (mm < 1 || mm > 12)
		return false;

	if (dd < 1 || dd > 31)
		return false;
		
	if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
		return (dd <= 30);

		return true;
}


void showDate(const char *fmt) const{
	if(!strcmpi(fmt,"mm/dd/yyyy"))  
		cout<< month << "/" << day << "/" << year<<endl;
	else if(!strcmpi(fmt,"mm-dd-yyyy"))
		cout<< month << "-" << day << "-" << year<<endl;
	else if(!strcmpi(fmt,"dd/mm/yyyy"))
		cout<< day << "/" << month << "/" << year<<endl;
	else
		cout<< day << "-" << Months[month] << "-" << year<<endl;
}


void nextDay(){
	if (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)){
		if (month == 12){
			month = 1;
			day = 1;
			year++;
}
	else{
		day = 1;
		month++;
}
}
	if (day == 30 && (month == 4|| month == 6 || month == 9 || month == 11)){
		day = 1;
		month++;
}

	day++;
}

int noOfDaysInMonth(int month){
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
		case 4: case 6: case 9: case 11: return 30;

}
}

int noOfDaysPassedInYear(){
	int days = day;

	for(int i=1; i<month; i++){
	days += noOfDaysInMonth(i);
}
	return days;
}


int noOfDaysRemainingInYear(){
	int days;
}

Date addDays(int days){
	Date t;
	int d;

	int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


if(days<noOfDaysRemainingInYear()){
	d = noOfDaysPassedInYear() + days;
	t.year = year;
}
	else{
	days = days - noOfDaysRemainingInYear();
	t.year = year + 1;
}

	int i;
	for(int i=0;i<12;i++){
	if(d<months[i]) break;
	d = d - months[i];
}

t.day = d;
t.month = i + 1;

return t;

};
};

string Date::Months[13] = {"", "January", "February", "March", "April",
"May", "June", "July", "August", "September",
                   "October", "November", "December"};


int main(){
	Date d(1, 1, 2019);
	
	d.showDate("");
	d.nextDay();
	d.showDate("");

return 0;
}
