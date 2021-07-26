#include<iostream>
#include<fstream>
#include<random>
#include<stdlib.h>

struct s_data{
    float min;
    float max;
    int n_num;
    bool b_int;
    int seed;
};

 
s_data read_data_from_file(const char* );

float* generate_data( const s_data );

void out_file(s_data&);

int main(int argc, char ** argv ){
    s_data indata;
    if(argc == 2){
         indata = read_data_from_file(argv[1]);

    }
    else
    {
        std::cerr << "ERROR: insert input name file\n";
        return 1;       
    }
    return 0;
}



s_data read_data_from_file(const char* NAMEFILE)
{
    s_data odata;
    char comment[256];
    char appo[256];
    std::cout<< NAMEFILE<<std::endl;
    std::ifstream ifs;
    ifs.open(NAMEFILE,std::ifstream::in);
    while(ifs.good() && !ifs.eof())
    {
        ifs >> appo; ifs.getline(comment,256,'\n');
        odata.min = std::atof(appo);

        ifs >> appo; ifs.getline(comment,256,'\n');
        odata.max = std::atof(appo);
        
        ifs >> appo; ifs.getline(comment,256,'\n');
        odata.n_num = std::atof(appo);
        
        ifs >> appo; ifs.getline(comment,256,'\n');
        odata.b_int = std::atof(appo);
        
        ifs >> appo; ifs.getline(comment,256,'\n');
        odata.seed = std::atof(appo);
    }
    return odata;
}

float* generate_data(const s_data indata)
{
    srand(indata.seed);
    float out[indata.n_num];
}


