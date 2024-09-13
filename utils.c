#include "utils.h"
void printsuperhello(){
    printf("wow super hello called from printsuperhello");
}
bool str_in_array_c(string str, string* array, bool casesensitive){
    int array_length = sizeof_array_s(array);
    for(int i=0; i<array_length; i++){

    }
    return false;
}
bool str_in_array(string str, string* array){
    return str_in_array_c(str,array,1);
}
bool str_in_array(string str, string* array){
    return str_in_array_c(str,array,0);
}
int sizeof_array_s(string* array){
    return sizeof(array)/sizeof(array[0]);
}