# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

add_executable(sample_usage sample_usage.cpp)

target_link_libraries(sample_usage PRIVATE beman::copyable_function)
