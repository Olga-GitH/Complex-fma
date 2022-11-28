//fma for complex: a*b+c
template<typename fp_t>
complex<fp_t> cfma(complex<fp_t> a, complex<fp_t> b, complex<fp_t> c){
    fp_t ar, ai, br, bi, cr, ci, p11, p1, p21, p2;

    ar = a.real(); ai = a.imag();
    br = b.real(); bi = b.imag();
    cr = c.real(); ci = c.imag();

    p11 = fma(ar, br, cr);
    p1 = fma(-ai, bi, p11);
    p21 = fma(ai, br, ci);
    p2 = fma(ar, bi, p21);
    complex<fp_t> num(p1, p2);
    return num;
}
