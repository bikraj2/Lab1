#ifndef custom_error_h
#define custom_error_h
#include<iostream>
using namespace std;
class custom_error : public std:: exception
{
    public:
     custom_error ();
     custom_error(string msg);
     string what();
    private:

    string msg;
};

#endif