#
# Copyright (C) 2017 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# model
model = Model()

row1 = 512
row2 = 256
col = 1024
output_row = row1 + row2

input1 = Input("input1", "TENSOR_FLOAT32", "{%d, %d}" % (row1, col)) # input tensor 1
input2 = Input("input2", "TENSOR_FLOAT32", "{%d, %d}" % (row2, col)) # input tensor 2
axis0 = Int32Scalar("axis0", 0)
output = Output("output", "TENSOR_FLOAT32", "{%d, %d}" % (output_row, col)) # output
model = model.Operation("CONCATENATION", input1, input2, axis0).To(output)

# Example 1.
input1_values = [x for x in range(row1 * col)]
input2_values = (lambda s1 = row1 * col, s2 = row2 * col:
                 [x + s1 for x in range(s2)])()
input0 = {input1: input1_values,
          input2: input2_values}
output_values = [x for x in range(output_row * col)]
output0 = {output: output_values}

# Instantiate an example
Example((input0, output0))
