// Copyright 2019 ByteDance, Inc. All Rights Reserved.
// Copyright 2018 Uber Technologies, Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// =============================================================================

#ifndef BYTEPS_TORCH_CUDA_UTIL_H
#define BYTEPS_TORCH_CUDA_UTIL_H

#include "../common/common.h"

namespace byteps {
namespace torch {

class with_device {
 public:
  with_device(int device);
  ~with_device();

 private:
  int restore_device_ = CPU_DEVICE_ID;
};

}  // namespace torch
}  // namespace byteps

#endif  // BYTEPS_TORCH_CUDA_UTIL_H
