#include<sys/time.h>
#include<unistd.h>
#include<assert.h>

int fool_around(){
    return 10;
}

long nanosec(struct time_value t){
    //to calculate the nanoseconds ina time_value structure
    return ((t.tv_sec*1000000 + t.t_usec)*1000); 
}

main()
{
    int i, j , result;
    long n_iterations = 1000000; //1 million
    float 
}