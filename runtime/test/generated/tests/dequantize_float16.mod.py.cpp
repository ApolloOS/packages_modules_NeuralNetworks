// clang-format off
// Generated file (from: dequantize_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace dequantize_float16 {
// Generated dequantize_float16 test
#include "generated/examples/dequantize_float16.example.cpp"
// Generated model constructor
#include "generated/models/dequantize_float16.model.cpp"
} // namespace dequantize_float16

TEST_F(GeneratedTests, dequantize_float16) {
    execute(dequantize_float16::CreateModel,
            dequantize_float16::is_ignored,
            dequantize_float16::get_examples());
}

