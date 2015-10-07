// Copyright 9/3/2015 Andre Abrams
// Homework - Prison Classes

#include <iostream>
#ifndef LIB_PRISON_H_
#define LIB_PRISON_H_

class Prison {
 private:
  static const int cells = 40;
  int prisoners;
  int bedsPerCell;
  int cellCapacity;
 public:
  void prison();
  void setNumOfBeds(int numOfBeds);
  int getNumOfBeds();
  void setNumOfPrisoners(int NumOfPrisoners);
  int getNumOfPrisoners();
  void setCellCap();
  int getCellCap();
};
#endif  // LIB_PRISON_H_
