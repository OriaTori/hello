#include <iostream>
#include <random>

int main(){
    // to storage array in heap
    int* tab = new int[37];
    
    // Random number
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1,255);

    for(int i=0; i < 37; i++){
        tab[i] = uniform_dist(e1);
    }

    std::cout<<"Hello Martyna\n";
    std::cout<<"Remamber - better version with endl"<< std::endl;
    std::cout<<"To change branch use: git checkout\n";
    std::cout<<"Change something to make a commit - on different branch"<< std::endl;

    delete[] tab;
    return 0;
}
