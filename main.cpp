#include <QCoreApplication>
#include <QImage>
#include <QPixmap>
#include "grid.h"
#include "randomizer.h"
#include "diamondsquare.h"
#include <iostream>
#include <random>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int heigth = 16;
    int width = 16;
    std::vector<uint8_t> pixels(heigth * width);

    Grid grid(heigth, width);

    int counter = 0;
    for (std::size_t i = 0; i < heigth; i++){
        for(std::size_t j = 0; j < width; j++){
            grid.setValue(i,j,0);
            pixels[i*j] = static_cast<uint8_t>(grid.getValue(i,j)*255);
            counter++;
        }
    }
    QImage img(pixels.data(), width, heigth, QImage::Format_Grayscale8);
    img.save("H:\\DEVELOP\\cpp\\noise\\noise_gen\\test.jpg");
    Randomizer rand;
    DiamondSquare diamond(rand);

    std::cout << "ok";


    return a.exec();
}
