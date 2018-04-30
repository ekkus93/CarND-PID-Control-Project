#include "ctewriter.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

CTEWriter::CTEWriter()
{
  isOpen_ = false;
}

CTEWriter::~CTEWriter()
{
  if (isOpen_)
  {
    Close();
  }
}

void CTEWriter::Open(string filename)
{
  outfile_ = new ofstream(filename);
  isOpen_ = true;
}

void CTEWriter::Write(int step, double cte)
{
  *outfile_ << step << "," << cte << "\n";
}

void CTEWriter::Close()
{
  outfile_->close();
  isOpen_ = false;
}