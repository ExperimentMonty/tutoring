/*
 *  DateTime.cpp                                
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

#include <iostream>
#include <iomanip>
#include "DateTime.h"

/*****************************************************
 *                                                   *
 *       class Date implementation details           *
 *                                                   *
 *****************************************************/

  //put your Date member function implementation details here



/*****************************************************
 *                                                   *
 *       class Time implementation details           *
 *                                                   *
 *****************************************************/

Time::Time(int hour, int minute)
{
    #ifdef DEBUG_DATE
        std::cout << "Entered constructor Time::Time(int, int, int)" << std::endl;
    #endif
    
    setTime(hour, minute);
    
    #ifdef DEBUG_DATE
        std::cout << "Exiting constructor Time::Time(int, int)" << std::endl;
    #endif
}


void Time::setTime(int hour, int minute)
{
    hh = hour;
    mm = minute;
}

std::istream& operator>>(std::istream &in, Time &t)
{
    char ch;
    
    in >> std::setw(2) >> t.hh; //extract the hours and store them in data member hh
    
    in >> ch; //extract and discard the dilimiting character
    
    in >> std::setw(2) >> t.mm; //extract the minutes and store them in data member mm
    
    return in;
}

std::ostream& operator<<(std::ostream &os, const Time &t)
{
    os << std::setfill('0');

    os << std::setw(2) << t.hh << ":";
    os << std::setw(2) << t.mm; 
    
    return os;
}

const Time& Time::operator=(const Time &rhsObj)
{
    if (this != &rhsObj)
    {
        //not a self assignment, OK to proceed
        hh = rhsObj.hh;
        mm = rhsObj.mm;
    }
    
    return rhsObj;
}

