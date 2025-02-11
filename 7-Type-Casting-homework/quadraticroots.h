#ifndef QRH
#define QRH
struct QuadraticRootsResult {
    double x1, x2;
    int norealroots;
};
struct QuadraticRootsResult findroots(double a, double b, double c);
#endif