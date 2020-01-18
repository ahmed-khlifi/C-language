#include <stdio.h>
#include <cs50.h>

// triangle function
bool valid_triangle(float a, float b, float c);

int main(void){
    float x = get_float("x : ");
    float y = get_float("y : ");
    float z = get_float("z : ");
    bool r = valid_triangle(x, y, z);
    if(r==true){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
}

bool valid_triangle(float a, float b, float c){
    // check if the triangl is invalid
    if((a+b<=c) || (b+c<=a) || (a+c<=b)){
        return false;
    }
    // return true when triangl is valid
    return true;

}
