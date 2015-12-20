  1 //============================================================================
  2 // Name        : legr_core.cpp
  3 // Author      : Hyunwoo J. Kim
  4 //         : Anmol Mohanty
  5 // Version     : 0.1
  6 // Date        : 07.16.2014
  7 // Copyright   : Your copyright notice
  8 // Description : Hello World in C++, Ansi-style
  9 //============================================================================
 10
 11
 12 #include <iostream>
 13 #include <armadillo>
 14 #include <boost/filesystem.hpp>
 15 #include <boost/filesystem/operations.hpp>
 16 #include <boost/filesystem/path.hpp>
 17 #include <omp.h>
 18
 19 #include "spd_funcs.h"
 20 #include "gr_spd.h"
 21
 22 #define DIM_DTI 6
 23 // Index of elements in save files
 24 #define iDxx 0
 25 #define iDxy 1
 26 #define iDxz 2
 27 #define iDyy 3
 28 #define iDyz 4
 29 #define iDzz 5
 30
 31 using namespace std;
 32
 33 using namespace arma; //for the armadillo library, this is separate from boost
 34
 35 namespace fs=boost::filesystem; //namespace is being declared
 36
 37 int main(int argc, char** argv)
 38 {
 39
"legr_core_multi_thread.cpp" [readonly] 232L, 6926C                                                                                                  1,1           Top
