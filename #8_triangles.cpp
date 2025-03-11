#include <iostream>
#include <vector>

int crossProduct(int x1, int y1, int x2, int y2, int x3, int y3){
    int vx1 = x2 - x1;
    int vy1 = y2 - y1;
    int vx2 = x3 - x1;
    int vy2 = y3 - y1;
    return (vx1 * vy2) - (vy1 * vx2);
}

int main(){
    freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);

    int N{};
    int max{0};
    int temp{};

    std::cin>>N;
    std::vector<int> xCoor(N, 0);
    std::vector<int> yCoor(N, 0);

    for (int i=0;i!=N;i++){
        std::cin>>xCoor[i]>>yCoor[i];
    }
    for (int i=0;i!=N;i++){
        for (int j=0;j!=N;j++){
            for (int k=0;k!=N;k++){
                temp=crossProduct(xCoor[i], yCoor[i], xCoor[j], yCoor[j], xCoor[k], yCoor[k]);
                if (temp>max){
                    max=temp;
                }
            }
        }
    }
    std::cout<<max;
    return 0;
}
