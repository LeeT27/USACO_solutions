#include <iostream>
#include <vector>
#include <unordered_set>

int main(){
    //freopen("blist.in", "r", stdin);
	//freopen("blist.out", "w", stdout);
    int n;
    int max{0};
    std::cin>>n;
    std::vector<int> vec (n);
    for (int i=0;i!=n;i++){
        std::cin>>vec[i];
    }
    std::unordered_set<int> distinctVec(vec.begin(), vec.end());

    int distinct = distinctVec.size();
    std::cout<<distinct;
    return 0;
}