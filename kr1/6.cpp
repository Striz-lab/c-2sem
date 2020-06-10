double find_root(double (*f)(double), double a, double b, double tolerance){
    double x;
    x = (a + b)/ 2;
    if (a > b)
        std::swap(a,b);
    while ((f(x) > tolerance) or (f(x) < -tolerance)){
        if (f(x)*f(b) < 0)
            a = x;
        else
            b = x;
        x = (a + b)/2;
    }
    return x;
}
