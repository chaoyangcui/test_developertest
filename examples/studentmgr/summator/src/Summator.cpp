/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Summator.h"
#include "IParser.h"

int Summator::compute(const char* str) const
{
    if (str == nullptr) {
        return 0;
    }

    int sum = 0;
    std::vector<int> arr = m_parser.parse(str);
    for (const auto& el : arr) {
        sum += el;
    }

    return sum;
}