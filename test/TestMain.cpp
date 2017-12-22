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

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    return 0;
}
