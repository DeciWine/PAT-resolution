#include<cstdio>
#include<cmath>

//to check if the number is prime
bool checkPrime(int num) {
	if (num <= 1) return false;
	double sqr = sqrt((double) num);
	for (int i = 2; i <= sqr; ++i) {
		if (num%i == 0) return false;
	}
	return true;
}

int main() {
	int num = 2;
	int count = 0;
	int outCount = 0;
	int minNum,maxNum;
	scanf("%d%d", &minNum, &maxNum);
	do {
		if (checkPrime(num)) {
			count++;
			if (count >= minNum&&count < maxNum) {
				outCount++;
				if (outCount % 10 == 0) printf("%d\n", num);
				else printf("%d ", num);
			}
			if (count == maxNum) printf("%d", num);
		}
		num++;
	} while (count!=maxNum);
	
	return 0;
}