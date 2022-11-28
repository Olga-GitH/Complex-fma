# Complex-fma
Function cfma is implemented as a template using the standart fma and accepts types of the float, double and long double types:
- complex<fp_t> cfma  (complex<fp_t> a, complex<fp_t> b, complex<fp_t> c)

Returns a*b+c.

# Mathematical calculations
For complex a = ar + i * ai , b = br + i * bi, c = cr + i * ci:

a * b = (ar * br - ai * bi) + i*(ai * br + ar * bi) 

#### a * b + c = 

= (ar * br - ai * bi + cr) + i*(ai * br + ar * bi + ci) =

= ( (ar * br + cr) - ai * bi ) + i*( (ai * br + ci) + ar * bi) =

= (fma(ar, br, cr) - ai * bi) + i*(fma(ai, br, ci) + ar * bi) =

#### = fma(-ai, bi, fma(ar, br, cr)) + i * fma(ar, bi, fma(ai, br, ci))
