# Copyright 2019 Google
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

if(APPLE)
  file(GLOB headers Public/*.h)

  podspec_version(version ${PROJECT_SOURCE_DIR}/FirebaseCoreDiagnosticsInterop.podspec)

  objc_framework(
    FirebaseCoreDiagnosticsInterop
    HEADERS ${headers}
    VERSION ${version}
    INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}
    EXCLUDE_FROM_ALL
  )
endif()
