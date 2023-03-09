#include <vector>

#include "geometry.hpp"

#ifndef SNAKE_HPP
#define SNAKE_HPP

namespace snake {
/**
 * @class Snake
 * @brief A set of blocks forming a snake
 */
class Snake {
   private:
    std::vector<geometry::Block> blocks;

    unsigned size{1};
    const unsigned amount;

    int horizontal{0};
    int vertical{0};

   public:
    Snake(const unsigned);
    Snake(double, double, const unsigned);
    Snake(double, double, double, const unsigned);

    void draw(double);
    void move(double);
    void sense(int, int);
    void shift(void);
};

}  // namespace snake

#endif
