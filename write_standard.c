#include "unistd.h"

int main(){
    if(write(1, "this will be output to standard out\n", 36) !=36){
        write(2, "this was an error writing to standard out\n", 44);
        return -1;
    }
    return 0;
}
