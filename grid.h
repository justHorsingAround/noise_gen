#ifndef GRID_H
#define GRID_H

#include <QObject>
#include <QWidget>
#include <vector>

class Grid
{
private:
    std::vector<std::vector<double> > grid;

public:
    Grid(std::size_t width, std::size_t x);
    std::size_t getHeight();
    std::size_t getWidth();
    uint8_t getValue(std::size_t x, std::size_t y);
    void setValue(std::size_t x, std::size_t y, double value);


};

#endif // GRID_H
