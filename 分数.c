#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <最大公約数.h>
#include <分数.h>
struct fraction fraction_reduce(struct fraction reduced)
{
	int reducing = gcd(abs(reduced.denominator), abs(reduced.numerator));
	struct fraction ret = reduced;
	ret.denominator /= reducing;
	ret.numerator /= reducing;
	if (ret.denominator < 0) {
		ret.denominator *= -1;
		ret.numerator *= -1;
	}
	return ret;
}
struct fraction fraction_sum(struct fraction fraction1, struct fraction fraction2)
{
	if (fraction1.denominator == 0 || fraction2.denominator == 0) {
		fprintf(stderr, "%sの%d行目：引数の分母が０です。\n", __FILE__, __LINE__);
		exit(1);
	}
	return fraction_reduce((struct fraction){
		fraction1.denominator * fraction2.denominator,
		fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator
	});
}
struct fraction fraction_substract(struct fraction substracted, struct fraction substracting)
{
	if (substracted.denominator == 0 || substracting.denominator == 0) {
		fprintf(stderr, "%sの%d行目：引数の分母が０です。\n", __FILE__, __LINE__);
		exit(1);
	}
	return fraction_sum(
		substracted,
		fraction_product(
			(struct fraction){1, -1},
			substracting
		)
	);
}
struct fraction fraction_product(struct fraction fraction1, struct fraction fraction2)
{
	if (fraction1.denominator == 0 || fraction2.denominator == 0) {
		fprintf(stderr, "%sの%d行目：引数の分母が０です。\n", __FILE__, __LINE__);
		exit(1);
	}
	return fraction_reduce((struct fraction){fraction1.denominator * fraction2.denominator, fraction1.numerator * fraction2.numerator});
}
struct fraction fraction_divide(struct fraction divided, struct fraction dividing)
{
	if (divided.denominator == 0 || dividing.denominator == 0) {
		fprintf(stderr, "%sの%d行目：引数の分母が０です。\n", __FILE__, __LINE__);
		exit(1);
	}
	return fraction_product(divided, (struct fraction){dividing.numerator, dividing.denominator});
}