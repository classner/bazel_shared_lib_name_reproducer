#include <filesystem>
#include <gtest/gtest.h>

TEST(bazel_data_reproducer, data_dep_exists) {
  std::filesystem::path filePath("test.txt");
  ASSERT_TRUE(std::filesystem::exists(filePath));
}
