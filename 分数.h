#pragma once
struct fraction {
	int denominator;
	int numerator;
};
struct fraction fraction_sum(struct fraction fraction1, struct fraction fraction2);
struct fraction fraction_substract(struct fraction substracted, struct fraction substracting);
struct fraction fraction_product(struct fraction fraction1, struct fraction fraction2);
struct fraction fraction_divide(struct fraction divided, struct fraction dividing);