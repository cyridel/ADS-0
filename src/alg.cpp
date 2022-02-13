// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a % b == 0)
		return b;
	return NOD(b, a % b);
}
