#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
    assert(getTriangleType(5, 4, 3) == 0);
    assert(getTriangleType(3, 5, 4) == 0);

    assert(getTriangleType(1, 2, 3) == -2);
    assert(getTriangleType(3, 4, 6) == -1);
    assert(getTriangleType(3, 3, 3) == 1);
}

void testGetDrawCount() {
    assert(getDrawCount(3) == 1);
    assert(getDrawCount(30) == 10);
    assert(getDrawCount(100) == 33);

    assert(getDrawCount(-3) == 0);
}

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    testGetDrawCount();
    return 0;
}
