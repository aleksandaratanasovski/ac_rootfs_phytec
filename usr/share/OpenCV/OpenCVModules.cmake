# Generated by CMake 3.6.1

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget opencv_core opencv_flann opencv_imgproc opencv_ml opencv_photo opencv_reg opencv_surface_matching opencv_video opencv_dnn opencv_fuzzy opencv_imgcodecs opencv_shape opencv_videoio opencv_highgui opencv_objdetect opencv_plot opencv_superres opencv_ts opencv_xobjdetect opencv_xphoto opencv_bgsegm opencv_bioinspired opencv_dpm opencv_face opencv_features2d opencv_line_descriptor opencv_saliency opencv_text opencv_calib3d opencv_ccalib opencv_cvv opencv_datasets opencv_rgbd opencv_stereo opencv_structured_light opencv_tracking opencv_videostab opencv_xfeatures2d opencv_ximgproc opencv_aruco opencv_optflow opencv_stitching)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)

# Create imported target opencv_core
add_library(opencv_core SHARED IMPORTED)

# Create imported target opencv_flann
add_library(opencv_flann SHARED IMPORTED)

# Create imported target opencv_imgproc
add_library(opencv_imgproc SHARED IMPORTED)

# Create imported target opencv_ml
add_library(opencv_ml SHARED IMPORTED)

# Create imported target opencv_photo
add_library(opencv_photo SHARED IMPORTED)

# Create imported target opencv_reg
add_library(opencv_reg SHARED IMPORTED)

# Create imported target opencv_surface_matching
add_library(opencv_surface_matching SHARED IMPORTED)

# Create imported target opencv_video
add_library(opencv_video SHARED IMPORTED)

# Create imported target opencv_dnn
add_library(opencv_dnn SHARED IMPORTED)

# Create imported target opencv_fuzzy
add_library(opencv_fuzzy SHARED IMPORTED)

# Create imported target opencv_imgcodecs
add_library(opencv_imgcodecs SHARED IMPORTED)

# Create imported target opencv_shape
add_library(opencv_shape SHARED IMPORTED)

# Create imported target opencv_videoio
add_library(opencv_videoio SHARED IMPORTED)

# Create imported target opencv_highgui
add_library(opencv_highgui SHARED IMPORTED)

# Create imported target opencv_objdetect
add_library(opencv_objdetect SHARED IMPORTED)

# Create imported target opencv_plot
add_library(opencv_plot SHARED IMPORTED)

# Create imported target opencv_superres
add_library(opencv_superres SHARED IMPORTED)

# Create imported target opencv_ts
add_library(opencv_ts STATIC IMPORTED)

# Create imported target opencv_xobjdetect
add_library(opencv_xobjdetect SHARED IMPORTED)

# Create imported target opencv_xphoto
add_library(opencv_xphoto SHARED IMPORTED)

# Create imported target opencv_bgsegm
add_library(opencv_bgsegm SHARED IMPORTED)

# Create imported target opencv_bioinspired
add_library(opencv_bioinspired SHARED IMPORTED)

# Create imported target opencv_dpm
add_library(opencv_dpm SHARED IMPORTED)

# Create imported target opencv_face
add_library(opencv_face SHARED IMPORTED)

# Create imported target opencv_features2d
add_library(opencv_features2d SHARED IMPORTED)

# Create imported target opencv_line_descriptor
add_library(opencv_line_descriptor SHARED IMPORTED)

# Create imported target opencv_saliency
add_library(opencv_saliency SHARED IMPORTED)

# Create imported target opencv_text
add_library(opencv_text SHARED IMPORTED)

# Create imported target opencv_calib3d
add_library(opencv_calib3d SHARED IMPORTED)

# Create imported target opencv_ccalib
add_library(opencv_ccalib SHARED IMPORTED)

# Create imported target opencv_cvv
add_library(opencv_cvv SHARED IMPORTED)

# Create imported target opencv_datasets
add_library(opencv_datasets SHARED IMPORTED)

# Create imported target opencv_rgbd
add_library(opencv_rgbd SHARED IMPORTED)

# Create imported target opencv_stereo
add_library(opencv_stereo SHARED IMPORTED)

# Create imported target opencv_structured_light
add_library(opencv_structured_light SHARED IMPORTED)

# Create imported target opencv_tracking
add_library(opencv_tracking SHARED IMPORTED)

# Create imported target opencv_videostab
add_library(opencv_videostab SHARED IMPORTED)

# Create imported target opencv_xfeatures2d
add_library(opencv_xfeatures2d SHARED IMPORTED)

# Create imported target opencv_ximgproc
add_library(opencv_ximgproc SHARED IMPORTED)

# Create imported target opencv_aruco
add_library(opencv_aruco SHARED IMPORTED)

# Create imported target opencv_optflow
add_library(opencv_optflow SHARED IMPORTED)

# Create imported target opencv_stitching
add_library(opencv_stitching SHARED IMPORTED)

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/OpenCVModules-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
