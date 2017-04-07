//#include<cstdio>
//#include<cstring>
//
//
//
//#define modNum 1000000007
//
//char str[100000];
//int PNum[100000] = {0};
//int PANum[100000] = {0};
//
//
//int main() {
//	scanf("%s", str);
//	long long count = 0;
//	if (str[0] == 'P') PNum[0]++;
//	for (int i = 1; i < strlen(str); i++) {
//		PNum[i] = PNum[i - 1];
//		PANum[i] = PANum[i - 1];
//		if (str[i] == 'P') PNum[i]++;
//		else if (str[i] == 'A') PANum[i] = PANum[i - 1] + PNum[i];
//		else if (str[i] == 'T') count += PANum[i] % modNum;
//	}
//	
//	
//
//	printf("%lld", count%modNum);
//}