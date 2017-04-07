//#include<iostream>
//using namespace std;
//
//#define INF 1000000
//int vertexNum;//点数
//int edgeNum;//边数
//struct Edge
//{
//	int from;//边的起点
//	int to;//边的终点
//	int cost;//边的权值
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
//	int*leastCost = new int[vertexNum];//点0到每个点的最短距离
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