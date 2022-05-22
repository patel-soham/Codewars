/*
Deoxyribonucleic acid, DNA is the primary information storage molecule in biological systems. It is composed of four nucleic acid bases Guanine ('G'), Cytosine ('C'), Adenine ('A'), and Thymine ('T').

Ribonucleic acid, RNA, is the primary messenger molecule in cells. RNA differs slightly from DNA its chemical structure and contains no Thymine. In RNA Thymine is replaced by another nucleic acid Uracil ('U').

Create a function which translates a given DNA string into RNA.

For example:

"GCAT"  =>  "GCAU"
The input string can be of arbitrary length - in particular, it may be empty. All input is guaranteed to be valid, i.e. each input string will only ever consist of 'G', 'C', 'A' and/or 'T'.
*/

#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna)
{
    char* str = (char*) malloc (strlen(dna)+1);
    strcpy(str,dna);
    for(int i = 0; i < (int)strlen(str); i++){
      if(str[i] == 'T'){
        str[i] = 'U';
      }
    }
    return str;
}

/* BEST
size_t len = strlen(dna);
  char *res = malloc(len + 1);
  for (size_t i = 0; i < len; i++)
    res[i] = dna[i] == 'T' ? 'U' : dna[i];
  res[len] = '\0';
  return res;
*/
