/*
 *  DateTime.h                                 
 *                                                
 *  COSC 052 Spring 2014                          
 *  Project #1                                    
 *                                                
 *  Due on:    JAN 30, 2014                  
 *  Author:    <name>                           
 * 
 *
 *  In accordance with the class policies and Georgetown's
 *  Honor Code, I certify that, with the exception of the 
 *  class resources and those items noted below, I have neither
 *  given nor received any assistance on this project. 
 */

#ifndef COSC52Fall2013P1_Date_h
#define COSC52Fall2013P1_Date_h

#include <iostream>
#include <iomanip>

#define DEBUG_DATE

class Date
{

	//put your Date class specification here

}; //end class Date



class Time 
{
    friend std::istream& operator>>(std::istream &in, Time &t);
        //Overloaded stream extraction operator
        //Postcondition: Extracts values for each data member from 
        //the input stream.  Format of the data in the stream 
        //is assumed to be:  hh:mm:ss.sssZ
        //The delimiting characters are read and discarded.
        //The decimal point is read and discarded.  The fractional
        //seconds are stored as an integer. 
    
    friend std::ostream& operator<<(std::ostream &os, const Time &t);
        //Overloaded stream insertion operator.
        //Postcondition: The time is output to the steam.  Delimiting 
        //characters are replaced and the decimal point is added
        //between the seconds and fraction sections.  The result
        //is a time value output in the same format as was read in.
    
private:
    int hh;
        //two digit integer for hour of day
    int mm;
        //two digit integer for minute of day

    
public:
    Time(int = 0, int = 0);
        //constructor with parameters, with default values
        //This constructor calls the member function setTime()
        //and passes the same arguments as were passed in to
        //the constructor, function setTime() updates the data members.
        //Postcondition: Sets the values of hh and mm
        //according to the values of the arguments passed in.
        //If no values are passed, this acts as the default constructor
        //all integer data members are set to zero  
    
    void setTime(int, int);
        //Function to set the values of the object data members,
        //can be called directly or by a constructor.
        //Postcondition: Data members are set to the values
        //of the respective arguments passed in.
    
    int getHour() const {return hh;}
        //In-line function to return the hour value.
        //Postcondtion: The value of data member hh is retured. 
    
    int getMinute() const {return mm;}
        //In-line function to return the minute value.
        //Postcondtion: The value of data member mm is retured.
    
    const Time& operator=(const Time&);
        //Overloaded assignment operator.
        //Postcondtion: The values of right hand side object's
        //data members are copied to the respective data
        //members of the left hand side object.
    
}; //end class Time

#endif
