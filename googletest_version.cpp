#include <gtest/gtest.h>
#include "lib.h"
// Demonstrate some basic assertions.
TEST(VersionTest, BasicAssertions) {
  // Expect equality.
ASSERT_GT(version(), 0) << "wrong programm version";
}
