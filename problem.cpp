#include <iostream>
#include <vector>
#include <unordered_set>

int main(){
    freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
    int n;
    std::cin>>n;
    std::vector<int> order (n);
    std::vector<int> id (n);
    std::vector<int> final (n);
    for (int i=0;i!=n;i++){
        std::cin>>order[i];
    }
    for (int i=0;i!=n;i++){
        std::cin>>id[i];
    }
    for (int i=0;i!=n;i++){
        final[order[i]--]=id[i];
    }
    for (int i=0;i!=n;i++){
        std::cout<<final[i]<<'\n';
    }
    return 0;
}