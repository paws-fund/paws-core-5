// Copyright (c) 2020 The PAWS developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef PAWS_SAPLING_TEST_FIXTURE_H
#define PAWS_SAPLING_TEST_FIXTURE_H

#include "test/test_paws.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //PAWS_SAPLING_TEST_FIXTURE_H
