#include<iostream>
#include<fstream>
#include<random>

struct s_data{
    int range;
    int seed;
    int n_generated;
};

/**
 * usage: process the input from a file and output a struct of data
 * input:  [char*]
 * output: [data] 
 *  */ 
s_data read_data_from_file(char* NAMEFILE);
float generate_data(s_data&);
void out_file(s_data&);

int main(int argc, char ** argv ){
    if(argc > 2){
        s_data indata = read_data_from_file(argv[2]);
    }
    else
    {
        std::cerr << "ERROR: name file" << argv[2] << "does not exist\n";       
    }

    return 0;
}



s_data read_data_from_file(char* NAMEFILE)
{
    std::ifstream ifs;
    ifs.open(NAMEFILE,std::ifstream::in);
    
}


