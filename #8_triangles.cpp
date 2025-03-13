#include <iostream>
#include <vector>

int main(){
    freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);

    int N{};
    int max{0};
    int area{};

    std::cin>>N;
    std::vector<int> xCoor(N, 0);
    std::vector<int> yCoor(N, 0);

    for (int i=0;i!=N;i++){
        std::cin>>xCoor[i]>>yCoor[i];
    }
    for (int i=0;i!=N;i++){
        for (int j=0;j!=N;j++){
            for (int k=0;k!=N;k++){
                if (xCoor[i] == xCoor[j] && yCoor[i] == yCoor[k]) { 
                    area=std::abs(xCoor[k] - xCoor[i]) * std::abs(yCoor[j] - yCoor[i]);;
                    if (area>max){
                        max=area;
                    }
                }
            }
        }
    }
    std::cout<<max;
    return 0;
}
