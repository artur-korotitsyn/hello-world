/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on October 27, 2013, 3:07 PM
 */

#include<iostream>
#include <cstdlib>
#include "Helloer.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    Helloer helloer("World");
    cout << helloer.message() << endl;
    cin.get();
    system("pause");
    return 0;
}

//:))
