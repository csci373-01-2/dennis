// Copyright 2015 Evan Misshula

#include <cstdlib>
#include <iostream>
#include <string>

#include "../lib/Prison.h"

int main(int argc, char *argv[]) {
  using std::cout;
  using std::endl;

  Prison JJay;
  int localCells = -111;

  localCells = JJay.getCells();
  cout << "The number of cells is: " << JJay.getCells() << endl;
  JJay.setNumOfBedsPerCell(2);
  cout << "The number of beds per cell is: " << JJay.getNumOfBedsPerCell()
       << endl;
  JJay.setCellCap(3);
  cout << "The cell capacity is: " << JJay.getCellCap() << endl;
  JJay.setNumOfBeds();
  cout << "So the prison holds " << JJay.getNumOfBeds() << endl;
  JJay.setNumOfPrisoners(110);
  cout << "The number of prisoners is: " << JJay.getNumOfPrisoners() << endl;
  cout << endl;
}
