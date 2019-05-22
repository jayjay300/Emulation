#include <stdio.h>

int Disassembler(unsigned char *codebuffer, int pc)
{
unsigned char *code = &codebuffer[pc];
int opbytes = 1;
printf ("%04x ", pc);


switch (*code){
case 0x00: printf("NOP"); break;
case 0x01: printf("LXI      B,#$%02x%02x", code[2], code[1]); opbytes=3;break;
case 0x02: printf("STAX     B"); break;
case 0x03: printf("INX      B"); break;
case 0x04: printf("INR      B"); break;
case 0x05: printf("DCR      B"); break;
case 0x06: printf("MVI      B,#$%02x",code[1]);opbytes=2; break;


}  
}