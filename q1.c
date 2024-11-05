
Q1. We initialize a 25-element array with the prime numbers less than 100.
 int prime_lt_100[] = {2, 3, 5, 7, 11, 13, 17,
 19, 23, 29, 31, 37,41, 43, 47, 53, 59,
 61, 67, 71, 73, 79, 83, 89, 97};
 Determine the array elements given in the fol
lowing expressions;
 (a) prime_lt_100[24];
 (b) int i=10; prime_lt_100[i+4];
 (c) prime_lt_100[prime_lt_100[2] +
 prime_lt_100[0]];
 (d) prime_lt_100[6]=prime_lt_100[6] +
 prime_lt_100[16];



output of the code
(a) 97
(b) 47
(c) 19
(d) prime_lt_100[6] is updated to 76.
