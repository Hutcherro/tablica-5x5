#include <iostream>
#include<fstream>
int tab [4][4];

int max = 0;
void tableGen(){
    // int tab [ 4 ][ 4 ];
    for(int j = 0; j < 5; j++ )
    {
        for(int i = 0; i < 5; i++ )
        {
            // std::cout <<  rand() % 10 << " ";
            tab[j][i]+=rand() % 10;
        }
        // std::cout << "\n";
    }
    // return tab;
}
void printTable(){
    for(int j = 0; j < 5; j++){
         for(int i = 0; i < 5; i++){
         std::cout <<  tab[j][i] << " ";
         }
          std::cout << "\n";
    }
}
void tableMod(){
     for(int j = 0; j < 5; j++ )
    {
        for(int i = 0; i < 5; i++ )
        {
            // std::cout <<  rand() % 10 << " ";
            if(j == 0 || j == 4){
                if(i > 0 && i < 4){
                   tab[j][i] = 0; 
                }
               
            }
            if(j == 1 || j == 3){
                if(i == 2){
                   tab[j][i] = 0; 
                }
               
            }
        }
        // std::cout << "\n";
    }
}
void tableSum(){
    for(int j = 0; j < 5; j++ )
    {
        for(int i = 0; i < 5; i++ )
        {
            // std::cout <<  rand() % 10 << " ";
            max+=tab[j][i];
        }
        // std::cout << "\n";
    }
    // return tab;
}

void tableSave(){
    std::ofstream zapis("dane.txt");
	
	zapis<<tab;
	
	zapis.close(); 
    
}

int main() {
    tableGen();
    printTable();
    std:: cout << "\n";
    tableMod();
    printTable();
    tableSave();
    
    return 0;
}
