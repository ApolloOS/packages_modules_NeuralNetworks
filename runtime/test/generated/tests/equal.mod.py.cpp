// clang-format off
// Generated file (from: equal.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace equal {
// Generated equal test
#include "generated/examples/equal.example.cpp"
// Generated model constructor
#include "generated/models/equal.model.cpp"
} // namespace equal

TEST_F(GeneratedTests, equal_simple) {
    execute(equal::CreateModel,
            equal::is_ignored,
            equal::get_examples_simple());
}

TEST_F(GeneratedTests, equal_simple_int32) {
    execute(equal::CreateModel_int32,
            equal::is_ignored_int32,
            equal::get_examples_simple_int32());
}

TEST_F(GeneratedTests, equal_simple_float16) {
    execute(equal::CreateModel_float16,
            equal::is_ignored_float16,
            equal::get_examples_simple_float16());
}

TEST_F(GeneratedTests, equal_simple_relaxed) {
    execute(equal::CreateModel_relaxed,
            equal::is_ignored_relaxed,
            equal::get_examples_simple_relaxed());
}

TEST_F(GeneratedTests, equal_broadcast) {
    execute(equal::CreateModel_2,
            equal::is_ignored_2,
            equal::get_examples_broadcast());
}

TEST_F(GeneratedTests, equal_broadcast_int32) {
    execute(equal::CreateModel_int32_2,
            equal::is_ignored_int32_2,
            equal::get_examples_broadcast_int32());
}

TEST_F(GeneratedTests, equal_broadcast_float16) {
    execute(equal::CreateModel_float16_2,
            equal::is_ignored_float16_2,
            equal::get_examples_broadcast_float16());
}

TEST_F(GeneratedTests, equal_broadcast_relaxed) {
    execute(equal::CreateModel_relaxed_2,
            equal::is_ignored_relaxed_2,
            equal::get_examples_broadcast_relaxed());
}

TEST_F(GeneratedTests, equal_quantized_different_scale) {
    execute(equal::CreateModel_3,
            equal::is_ignored_3,
            equal::get_examples_quantized_different_scale());
}

TEST_F(GeneratedTests, equal_quantized_different_zero_point) {
    execute(equal::CreateModel_4,
            equal::is_ignored_4,
            equal::get_examples_quantized_different_zero_point());
}

