//#include<cstdio>
//#include<cmath>
//int gcd(int a, int b) {
//	return !b ? a : gcd(b, a%b);
//}
//
//int lcm(int a, int b) {
//	return a / gcd(a, b)*b;
//}
////求数组所有数的最小公倍数
//int getLcms(int* arr,int len) {
//	if (len == 1) return arr[0];
//    if (len % 2 == 0) {
//		for (int i = 0; i < len; i += 2) {
//			arr[i / 2] = lcm(arr[i], arr[i + 1]);
//			}
//		return getLcms(arr, len / 2);
//	}
//	else {
//		int i = 0;
//		for ( ; i < len-1; i += 2) {
//			arr[i/2] = lcm(arr[i], arr[i + 1]);
//		}
//		arr[i / 2] = arr[len - 1];
//		return getLcms(arr, len / 2 + 1);
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	do {
//		int k;
//		scanf("%d", &k);
//		int* arr = new int[k];
//		for (int i = 0; i < k; ++i) {
//			scanf("%d", arr + i);
//		}
//
//		printf("%d\n", getLcms(arr, k));
//		
//		n--;
//	} while (n != 0);
//	
//}