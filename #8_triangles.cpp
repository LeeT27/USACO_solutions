#include <iostream>
#include <vector>

int main(){
    freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);

    int crossProduct(int x1, int y1, int x2, int y2, int x3, int y3) {
        // Form two vectors: A->B and A->C
        int vx1 = x2 - x1;
        int vy1 = y2 - y1;
        int vx2 = x3 - x1;
        int vy2 = y3 - y1;
        
        // Compute the cross product
        return (vx1 * vy2) - (vy1 * vx2);
    }

    int N{};
    std::cin>>N;
    std::vector<int> xCoor(N, 0);
    std::vector<int> yCoor(N, 0);

    for (int i=0;i!=N;i++){
        std::cin>>xCoor[i]>>yCoor[i];
    }
    
    return 0;
}
