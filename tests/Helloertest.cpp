/*
 * File:   Helloertest.cpp
 * Author: user
 *
 * Created on Oct 27, 2013, 9:04:04 PM
 */

#include "Helloertest.h"
#include "Helloer.h"


CPPUNIT_TEST_SUITE_REGISTRATION(Helloertest);

Helloertest::Helloertest() {
}

Helloertest::~Helloertest() {
}

void Helloertest::setUp() {
}

void Helloertest::tearDown() {
}

void Helloertest::testMessage() {
    Helloer helloer;
    string result = helloer.message();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

