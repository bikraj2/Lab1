#include "custom_error.h"

custom_error::custom_error(){
    this->msg = "An error occured";
}

custom_error::custom_error(string msg){
    this->msg=msg;
}
string custom_error::what()
{
    return this->msg;
}