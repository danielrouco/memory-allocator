#include <stdio.h>
#include <unistd.h> //for sbreak() function

#define MACHINE_BITS 64
#define MACHINE_BYTES MACHINE_BITS / 8

void *mall(int size);

int align(int size);

int main(){

}

void *mall(int size){
	
}

int align(int size){
    for(int i = 1; ; i++){
        if(MACHINE_BYTES * i >= size){
            return MACHINE_BYTES * i;
        }
    }
}