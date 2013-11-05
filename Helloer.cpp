/* 
 * File:   Helloer.cpp
 * Author: user
 * 
 * Created on October 27, 2013, 8:27 PM
 */

#include "Helloer.h"

Helloer::Helloer() {
}

Helloer::Helloer(const string& aWho)
{
    who = aWho;
}

Helloer::Helloer(const Helloer& orig) {
}

Helloer::~Helloer() {
}

string Helloer::message() const
{
    if (who.length() == 0)
        return "";
    return (string)"Hello " + who;
}