#include <iostream>
#include <vector>
int main(){
    int H,W; std::cin >> H >> W;
    std::vector<std::vector<int>> A(H, std::vector<int>(W,0));
    std::vector<int> col_sum(W,0), row_sum(H,0);
    for(int h=0; h<H; h++){
        for(int w=0; w<W;w++){
            std::cin >> A[h][w];
            col_sum[w] += A[h][w];
            row_sum[h] += A[h][w];
        }
    }

    std::vector<std::vector<int>> ans(H, std::vector<int>(W,0));
    for(int h=0; h<H; h++){
        for(int w=0; w<W;w++){
            ans[h][w] = col_sum[w] + row_sum[h] - A[h][w];
        }
    }

    for(auto line:ans){ 
        for(auto a:line) std::cout << a << " "; 
        std::cout << std::endl; 
    }
}