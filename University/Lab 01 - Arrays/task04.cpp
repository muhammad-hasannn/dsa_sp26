#include<iostream>
using namespace std;


int main(){
    
    int prices[3][3] = {
        {250000, 420000, 310000},
        {230000, 400000, 295000},
        {270000, 450000, 330000}
    };

    cout << "Original Matrix: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << prices[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // taking transpose
    int tPrices[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tPrices[i][j] = prices[j][i];
        }
    }

    cout << "After Transpose: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << tPrices[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}