#ifndef __SCAN_SETTINGS_H__
#define __SCAN_SETTINGS_H__

#include "slam6d/io_types.h"

#include <string>

template<class T>
struct range {
  T min, max;
};

struct scan_settings {
  std::string input_directory;
  IOType format;
  bool use_scanserver;
  range<int> scan_numbers;

  double scale;

  range<int> distance_filter;
  double octree_reduction_voxel;
  int octree_reduction_randomized_bucket{};
  int skip_files;

  // TODO make this an std::optional (C++17)
  int origin_type{};
  bool origin_type_set{};
  double sphere_radius;

  bool save_octree;
  bool load_octree;
  bool cache_octree;

  std::string objects_file_name{};
  std::string custom_filter{};
  std::string trajectory_file_name{};
  bool identity;
};


#endif //__DATASET_SETTINGS_H__
