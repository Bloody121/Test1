//#include "tst_test.h"
//#include "fibonachi_test.h"
#include "equatation_test.h"

#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
