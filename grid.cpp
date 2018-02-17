#include "grid.h"

Grid::Grid(std::size_t w, std::size_t h){
    grid.resize(h, std::vector<double> (w, 0));
}

std::size_t Grid::getHeight(){
    return grid.size();
}

std::size_t Grid::getWidth(){
    return grid[0].size();
}

void Grid::setValue(std::size_t x, std::size_t y, double value){
    grid[x][y] = value;
}

std::uint8_t Grid::getValue(std::size_t x, std::size_t y){
    return grid[x][y];
}





