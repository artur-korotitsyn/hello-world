/*
 * File:   Helloertest.h
 * Author: user
 *
 * Created on Oct 27, 2013, 9:04:03 PM
 */

#ifndef HELLOERTEST_H
#define	HELLOERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class Helloertest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(Helloertest);

    CPPUNIT_TEST(testMessage);
    CPPUNIT_TEST(testMessageNobody);

    CPPUNIT_TEST_SUITE_END();

public:
    Helloertest();
    virtual ~Helloertest();
    void setUp();
    void tearDown();

private:
    void testMessage();
    void testMessageNobody();

};

#endif	/* HELLOERTEST_H */

