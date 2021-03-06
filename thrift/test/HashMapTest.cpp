/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#define BOOST_TEST_MODULE HashMapTest
#include <boost/test/unit_test.hpp>
#include "thrift/test/gen-cpp/HashMapTest_types.h"

BOOST_AUTO_TEST_SUITE( HashMapTest )

BOOST_AUTO_TEST_CASE( test_hashmap ) {
  foo f;
  f.bar[5] = 6;
  BOOST_CHECK_EQUAL(f.bar[5], 6);
  f.bar[6] = 7;
  BOOST_CHECK_EQUAL(f.bar[6], 7);

  f.bar[5] = 7;
  BOOST_CHECK_EQUAL(f.bar[5], 7);

  f.baz["cool"] = 50;
  BOOST_CHECK_EQUAL(f.baz["cool"], 50);

  f.baz["cool"] = 30;
  BOOST_CHECK_EQUAL(f.baz["cool"], 30);
}

BOOST_AUTO_TEST_SUITE_END()
