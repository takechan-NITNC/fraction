#pragma once
struct fraction {
	int denominator;
	int numerator;
};
struct fraction int_to_fraction(int);
struct fraction fraction_sum(struct fraction, struct fraction);
struct fraction fraction_substract(struct fraction, struct fraction);
struct fraction fraction_product(struct fraction, struct fraction);
struct fraction fraction_divide(struct fraction, struct fraction);