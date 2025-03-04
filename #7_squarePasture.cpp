#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);

    std::vector<int> xCoor(4, 0);
    std::vector<int> yCoor(4, 0);

    for (int i=0;i!=4;i++){
        std::cin>>xCoor[i]>>yCoor[i];
    }
    
    int xRange = *std::max_element(xCoor.begin(), xCoor.end()) - *std::min_element(xCoor.begin(), xCoor.end());
    int yRange = *std::max_element(yCoor.begin(), yCoor.end()) - *std::min_element(yCoor.begin(), yCoor.end());

    if (xRange>yRange){
        std::cout<<(xRange*xRange)<<"\n";
    }
    else{
        std::cout<<(yRange*yRange)<<"\n";
    }
    return 0;
}
