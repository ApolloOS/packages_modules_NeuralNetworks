// Generated from rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::rnn

namespace android::hardware::neuralnetworks::V1_0::generated_tests::rnn {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, rnn) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::rnn::get_examples());
}

TEST_F(ValidationTest, rnn) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::rnn::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::rnn

namespace generated_tests::rnn {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::rnn

namespace android::hardware::neuralnetworks::V1_0::generated_tests::rnn {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, rnn_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::rnn::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, rnn_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::rnn::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::rnn

