//#include<iostream>
//using namespace std;
//
//int K ;
//double D;
//double* store;
//double* price;
//double* averagePrice;
//int main() {
//	scanf("%d%lf", &K, &D);
//	store = new double[K];
//	price = new double[K];
//	averagePrice = new double[K];
//	for (int i = 0; i < K; i++) scanf("%lf",&store[i]);
//	for (int i = 0; i < K; i++) scanf("%lf", &price[i]);
//	for (int i = 0; i < K; i++) averagePrice[i] = price[i] / store[i];
//	
//	double maxProfit = 0;
//	while (D!=0)
//	{
//		double maxAveragePrice = 0; int index = -1;
//		for (int i = 0; i < K; i++)
//			if (averagePrice[i]>maxAveragePrice) {
//				maxAveragePrice = averagePrice[i];
//				index = i;
//			}
//		if (store[index] > D) {
//			maxProfit = maxProfit + averagePrice[index] * D;
//			D = 0;
//		}
//		else {
//			maxProfit = maxProfit + price[index] ;
//			D = D - store[index];
//			averagePrice[index] = -1;
//			bool judge = false;
//			for (int i = 0; i < K; i++)
//				if (averagePrice[i] != -1) judge = true;
//			if (!judge) break;
//		}
//	}
//	printf("%.2f", maxProfit);
//
//}