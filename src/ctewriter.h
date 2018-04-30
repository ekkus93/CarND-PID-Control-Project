#ifndef CTEWRITER_H
#define CTEWRITER_H

#include <iostream>
#include <fstream>
#include <string>

class CTEWriter
{
  public:
    bool isOpen_;
    std::ofstream *outfile_;

    CTEWriter();
    ~CTEWriter();

    void Open(std::string filename);
    void Write(int step, double cte);
    void Close();
};

#endif /* CTEWRITER_H */