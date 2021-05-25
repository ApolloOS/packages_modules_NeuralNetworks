// Generated from rnn_state.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;  // NOLINT(google-build-using-namespace)

namespace generated_tests::rnn_state {

const TestModel& get_test_model() {
    static TestModel model = {
        .main = {
                .operands = {{ // input
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({-0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f})
                        }, { // weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // recurrent_weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // bias
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // hidden_state_in
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584256f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612267f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291233f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584256f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612267f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291233f})
                        }, { // activation_param
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // hidden_state_out
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = true,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // output
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f})
                        }},
                .operations = {{
                            .type = TestOperationType::RNN,
                            .inputs = {0, 1, 2, 3, 4, 5},
                            .outputs = {6, 7}
                        }},
                .inputIndexes = {0, 1, 2, 3, 4},
                .outputIndexes = {6, 7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_0
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("rnn_state", get_test_model());

}  // namespace generated_tests::rnn_state

namespace generated_tests::rnn_state {

const TestModel& get_test_model_all_inputs_as_internal() {
    static TestModel model = {
        .main = {
                .operands = {{ // input
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // recurrent_weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // bias
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // hidden_state_in
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // activation_param
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // hidden_state_out
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = true,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // output
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f})
                        }, { // input_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({-0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f})
                        }, { // placeholder
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // weights_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // placeholder1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // recurrent_weights_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // placeholder2
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param2
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // bias_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // placeholder3
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param3
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // hidden_state_in_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584256f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612267f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291233f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584256f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612267f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291233f})
                        }, { // placeholder4
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param4
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }},
                .operations = {{
                            .type = TestOperationType::ADD,
                            .inputs = {8, 9, 10},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {11, 12, 13},
                            .outputs = {1}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {14, 15, 16},
                            .outputs = {2}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {17, 18, 19},
                            .outputs = {3}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {20, 21, 22},
                            .outputs = {4}
                        }, {
                            .type = TestOperationType::RNN,
                            .inputs = {0, 1, 2, 3, 4, 5},
                            .outputs = {6, 7}
                        }},
                .inputIndexes = {8, 11, 14, 17, 20},
                .outputIndexes = {6, 7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_0
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal = TestModelManager::get().add("rnn_state_all_inputs_as_internal", get_test_model_all_inputs_as_internal());

}  // namespace generated_tests::rnn_state

