#include<bits/stdc++.h>
using namespace std;
bool isleap(int year){
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}
int main()
{
    map<string,int> month_calender,day_calender;
    day_calender["MONDAY"]=0;
    day_calender["TUESDAY"]=1;
    day_calender["WEDNESDAY"]=2;
    day_calender["THURSDAY"]=3;
    day_calender["FRIDAY"]=4;
    day_calender["SATURDAY"]=5;
    day_calender["SUNDAY"]=6;
    month_calender["JANUARY"]=31;
    month_calender["FEBRUARY"]=28;
    month_calender["MARCH"]=31;
    month_calender["APRIL"]=30;
    month_calender["MAY"]=31;
    month_calender["JUNE"]=30;
    month_calender["JULY"]=31;
    month_calender["AUGUST"]=31;
    month_calender["SEPTEMBER"]=30;
    month_calender["OCTOBER"]=31;
    month_calender["NOVEMBER"]=30;
    month_calender["DECEMBER"]=31;
    vector<string> months,days;
    days.push_back("MONDAY");
    days.push_back("TUESDAY");
    days.push_back("WEDNESDAY");
    days.push_back("THURSDAY");
    days.push_back("FRIDAY");
    days.push_back("SATURDAY");
    days.push_back("SUNDAY");
    months.push_back("JANUARY");
    months.push_back("FEBRUARY");
    months.push_back("MARCH");
    months.push_back("APRIL");
    months.push_back("MAY");
    months.push_back("JUNE");
    months.push_back("JULY");
    months.push_back("AUGUST");
    months.push_back("SEPTEMBER");
    months.push_back("OCTOBER");
    months.push_back("NOVEMBER");
    months.push_back("DECEMBER");
    int start_date,start_year,end_date,end_year;
    string start_month,start_day,end_month;
    cin>>start_date>>start_month>>start_year>>start_day>>end_date>>end_month>>end_year;
    long long int noofdays=0;
    if(start_month == end_month && start_year==end_year){
        noofdays = end_date - start_date;
        noofdays = day_calender[start_day]+noofdays;
        noofdays%=7;
    }
    else
    {
        if(start_year==end_year)
        {
            noofdays=month_calender[start_month]-start_date+1;
            bool trigger=false;
            for(auto iter:months)
            {
                if(iter==end_month)
                {
                    break;
                }
                if(trigger)
                {
                    noofdays+=month_calender[iter];
                }
                if(iter==start_month)
                {
                    trigger=true;
                }
                
            }
            noofdays+=end_date;
        }
        else
        {
            noofdays=month_calender[start_month]-start_date+1;
            bool trigger=false;
            for(auto iter : months){
                if(trigger){
                    noofdays+=month_calender[iter];
                }
                if(iter.compare(start_month)==0)
                {
                    trigger=true;
                }
            }
            for(int i=start_year+1;i<end_year;i++)
            {
                if(isleap(i)){
                    noofdays+=366;
                }
                else{
                    noofdays+=365;
                }
            }
            for(auto iter:months)
            {
                if(iter.compare(end_month)==0)
                {
                    break;
                }
                if((iter.compare("FEBRUARY")==0) && isleap(end_year))
                {
                    noofdays+=month_calender[iter]+1;
                }
                else
                {
                    noofdays+=month_calender[iter];
                }
            }
            noofdays+=end_date;
        }
    }
    int day_calc = noofdays%7;
    cout<<days[day_calc];
    
}
