/* 
 * File:   Helloer.h
 * Author: user
 *
 * Created on October 27, 2013, 8:27 PM
 */

#ifndef HELLOER_H
#define	HELLOER_H

#include<iostream>

using namespace std;

class Helloer {
public:
    Helloer();
    Helloer(const string& aWho);
    Helloer(const Helloer& orig);
    virtual ~Helloer();
    string message() const;
private:
    string who;

};

#endif	/* HELLOER_H */

