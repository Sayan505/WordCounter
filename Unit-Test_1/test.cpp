#include <gtest/gtest.h>

#include "../WordCounterCPP/counter.cpp"

TEST(word_count_test, correct_value) {
	std::string test_str = "Hello World, @AB^^^C X&YZ 1#23 !@# ?:{} &^*";

	ASSERT_EQ(5, word_count(test_str));
}