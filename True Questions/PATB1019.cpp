#include<iostream>
#include<cmath>
#include<algorithm>
using namespace  std;
int N;
int number[5];

bool compare(int a, int b) {
	return a > b;
}
void ToArray(int num,int* p) {
	for (int i = 0; i < 4; ++i) {
		int bit= num / (pow(10.0, (double)(3 - i)));
		p[i] = bit;
		num = num - bit * pow(10.0, (double)(3 - i));
	}
		
}
int ToNumber(int* p) {
	int result;
	result = p[0] * 1000 + p[1] * 100 + p[2] * 10 + p[3];
	return result;
}

int main() {
	scanf("%d", &N);
	//while (N <= 9999)
	//{


		ToArray(N, number);
		if (number[0] == number[1] && number[1] == number[2] && number[2] == number[3]) {
			printf("%04d - %04d = 0000\n", N, N);
			return 0;
			//N++;
			//continue;
		}

		do
		{
			ToArray(N, number);
			sort(number, number + 4);
			int smallNum = ToNumber(number);
			sort(number, number + 4, compare);
			int bigNum = ToNumber(number);
			N = bigNum - smallNum;
			printf("%04d - %04d = %04d\n", bigNum, smallNum, N);

		} while (N != 6174);
		//N++;
	//}
}