#include <iostream>
#include <vector>
int main(){
    freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
    int n;
    int maxTime{0};
    int currentBucket{0};
    int maxBucket{0};
    std::cin>>n;
    std::vector<std::vector<int>> vec(n, std::vector<int>(3));
    for (int i=0;i!=n;i++){
        std::cin>>vec[i][0]>>vec[i][1]>>vec[i][2];
        if (vec[i][1]>maxTime){
            maxTime=vec[i][1];
        }
    }
    for (int j=0;j!=maxTime;j++){
        for (int k=0;k!=n;k++){
            if (j>=vec[k][0]&&j<=vec[k][1]){
                currentBucket+=vec[k][2];
            }
        }
        if (currentBucket>maxBucket){
            maxBucket=currentBucket;
        }
        currentBucket=0;
    }
    std::cout<<maxBucket;
    return 0;
}