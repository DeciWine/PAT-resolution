//#include<iostream>
//#include<vector>
//using namespace std;
//vector<vector<int>> tree;
//int N;
//int maxDepth=1;
//int rootNo;
//int lastNodeNo;
////找根节点的序号
//int findTheRoot(vector<vector<int>> v) {
//	int*check = new int[v.size()];
//	for (int i = 0; i < v.size(); i++) {
//		check[i] = 0;
//	}
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < 2; j++)
//			if (v[i][j] != -1) check[v[i][j]] = 1;
//	}
//	for (int i = 0; i < v.size(); i++) {
//		if (check[i] == 0) return i;
//	}
//	return -1;
//}
////前序遍历并添加深度值
//void dfs(int id,int depth) {
//	if (id == -1) return;
//	tree[id].push_back(depth);
//	dfs(tree[id][0], depth+1);
//	dfs(tree[id][1], depth+1);
//	if (depth > maxDepth) maxDepth = depth;
//	
//}
////前序遍历并打标记，当maxDepth-1层左右子树为空时立即结束整个过程
//void dfs2(int id,bool &exit) {
//	if (exit) return;//exit为全局是否退出的标记
//	if (id == -1) return;
//	tree[id].push_back(1);
//	lastNodeNo = id;
//	if (tree[id][2] == maxDepth - 1 && tree[id][0] == -1 ) {
//		exit = true;
//		return;
//    }
//	else dfs2(tree[id][0],exit);
//	if (tree[id][2] == maxDepth - 1 && tree[id][1] == -1) {
//		exit = true;
//		return;
//	}
//	else dfs2(tree[id][1],exit);
//}
////判断是否只有最下面两层的度为1或2
//bool checkDegree(){
//	for(int i = 0; i < tree.size(); i++) {
//		if (maxDepth - tree[i][2] > 1) {
//			if (tree[i][0] == -1 || tree[i][1] == -1)
//				return false;
//			else continue;
//		}
//}
//}
////判断最下层的节点是否都在最左边,并返回最后一个节点的编号，否则返回根节点编号
//bool checkDeepestFloor() {
//	for(int i=0;i<tree.size();i++)
//		if (tree[i][2] == maxDepth) {
//			if (tree[i].size() == 3) return false;
//		}
//		else continue;
//		return true;
//		
//
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		vector<int> temp;
//	for (int j = 0; j < 2; j++) {
//
//			char in;
//			cin >> in;
//			if(in=='-'){ 
//				temp.push_back(-1); 
//			}
//			else temp.push_back((int)in-48);
//			
//		}
//		tree.push_back(temp);
//	}
//	rootNo = findTheRoot(tree);
//	dfs(rootNo, maxDepth);
//	if (!checkDegree()) {
//		printf("NO %d", rootNo);
//		return 0;
//	}
//	else {
//		bool exit = false;
//		dfs2(rootNo, exit);
//		if (!checkDeepestFloor())
//		{
//			printf("NO %d", rootNo);
//			return 0;
//		}
//		else {
//			printf("YES %d",lastNodeNo);
//			return 0;
//		}
//	}
//
//    for (int i = 0; i < N; i++) {
//		for (int j = 0; j < 3; j++)
//			cout << tree[i][j] << " ";
//			cout << endl;
//	}
//	cout << maxDepth;
//
//}