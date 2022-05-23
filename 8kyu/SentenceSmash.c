/*
Sentence Smash
Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!

Example
['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'
*/

#include <stdlib.h>
#include <string.h>

char *smash (const char *const words[], size_t nb_words)
{
  int size=0,i;
  for (i =0; i < (int)nb_words; i++){
    size += strlen(words[i]) + 1;
  }
  char* str = (char*) malloc(size);
  strcpy(str,"\0"); // OR str[0] = '\0'
  for(i =0; i < (int)nb_words; i++){
    strcat(str,words[i]);
    if (i == ((int)nb_words - 1)){
      break;
    }
    strcat(str," ");
  }
  return str;
}

/* Other
#include <stdio.h>
#include <string.h>

char *smash(const char **words, size_t count)
{
  int total_len = count - 1;
  for (int x = 0; x < count; ++x)
    total_len += strlen(words[x]);
    
  char *r = malloc(total_len + 1);
  if (!r) return 0;
  
  for (int x = 0, fwd = 0; x < count; ++x)
    fwd += sprintf(r + fwd, "%s ", words[x]);
    
  r[total_len] = 0;
  return r;
}
*/
