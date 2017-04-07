//寻找数组中第K大的数
#include<iostream>
#include<ctime>
using namespace std;

int*input;

int RandomPartition(int left,int right) {
	srand((unsigned)time(NULL));
	int flagValue = rand() % (right - left + 1) + left;
	//cout << "RANDOM: " << flagValue << endl;
	int temp = input[flagValue];
	input[flagValue] = input[left];
	while (left < right) {
		while (left<right&&input[right] >= temp){
			right--;
		}
		input[left] = input[right];
		while (left < right&&input[left] < temp) {
			left++;
		}
		input[right] = input[left];
	}
	input[left] = temp;
	return left;
}

int FindKthNumber(int left,int right,int k) {
	if (left<right){
		int gap = RandomPartition(left, right);
		if (gap == k - 1) return input[gap];
		else if (gap > k - 1) return FindKthNumber(left, gap - 1, k);
		else return FindKthNumber(gap + 1, right, k);
	}
	if (left == right&&left == k - 1)
		return input[left];
	return -1;
}


int main() {
	int N;
	while (cin >> N) {
		input = new int[N];
		for (int i = 0; i < N; ++i) cin >> input[i];
		int k;
		cin >> k;
		cout << FindKthNumber(0, N - 1,k) << endl;
		//for (int i = 0; i < N; ++i) cout << input[i]<<" ";
		//cout << endl<<endl;
	}
}