//#include<iostream>
//using namespace std;
//
//#define INF 1000000
//int vertexNum;//����
//int edgeNum;//����
//struct Edge
//{
//	int from;//�ߵ����
//	int to;//�ߵ��յ�
//	int cost;//�ߵ�Ȩֵ
//
//}*edges;
//
//
//int main() {
//	cin >> vertexNum >> edgeNum;
//	edges = new Edge[edgeNum];
//	for (int i = 0; i < edgeNum; i++) {
//		cin >> edges[i].from >> edges[i].to >> edges[i].cost;
//	}
//	int*leastCost = new int[vertexNum];//��0��ÿ�������̾���
//	for (int i = 0; i < vertexNum; i++)  leastCost[i] =INF;
//    leastCost[0] = 0;
//	
//	while (true)
//	{
//		bool change = false;
//		for (int i = 0; i < edgeNum; i++) {
//			if (leastCost[edges[i].to] > leastCost[edges[i].from] + edges[i].cost) {
//				leastCost[edges[i].to] = leastCost[edges[i].from] + edges[i].cost;
//				change = true;
//			}
//		}
//		if (!change) break;
//	}
//	for (int i = 0; i < vertexNum; i++) {
//		cout << i << ": " << leastCost[i] << endl;
//	}
//	return 0;
//}