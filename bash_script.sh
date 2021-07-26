#!/bin/bash
echo "bash version ${BASH_VERSION}" 
max=1000
min=0
b_int=1

for ((i=100;i<=120;i+=10))  
    do
    dirname="generate_$i"
    mkdir -p ${dirname}
    path="./${dirname}/"
    echo "make directory ${dirname} "
    for ((n=0;n<=10;n++))
        do 
        seed=$(( i + n)) 
        infile="dummy_data.dat"
        outfile="./${path}/data_num${i}_gen${n}.dat"
        sed -e "s:min:${min}:"\
            -e "s:max:${max}:"\
            -e "s:n_num:${i}:"\
            -e "s:b_int:${b_int}:"\
            -e "s:seed:${seed}:" < $infile > $outfile 
        
        done
    done
