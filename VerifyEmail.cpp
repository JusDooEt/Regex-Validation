#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool verifyEmail(string str1)
{
    /**********************************************************
    * 
    *    The domain name, the part after the @ sign, is 
    * restricted to characters allowed in domain names. 
    * Internationalized domain names are not allowed. The local 
    * part, the part before the @ sign, is restricted to 
    * characters commonly used in email local parts.
    *
    ***********************************************************/
    regex expression("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");

    return regex_match(str1, expression);
}