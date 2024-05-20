
#pragma once

#include <cstdint>
#include <string>

namespace tpcds {

struct tpcds_runner_result {
  bool is_new;
  int qid;
  double duration;
  double checked;
};

struct TPCDSWrapper {
  //! Generate the TPC-DS data of the given scale factor
  static bool DSDGen(int scale, char* table, bool overwrite);

  static uint32_t QueriesCount();
  //! Gets the specified TPC-DS Query number as a string
  static const char* GetQuery(int query);

  static void CreateTPCDSSchema();

  static void CleanUpTPCDSSchema();

  static tpcds_runner_result* RunTPCDS(int qid);
};

}  // namespace tpcds
