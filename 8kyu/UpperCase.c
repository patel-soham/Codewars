/*
Write a function which converts the input string to uppercase.
*/

char *makeUpperCase (char *string){
  int i = 0;
  while( string[i] != '\0'){
    if (string[i] >= 'a' && string[i] <= 'z'){
      string[i] -= ('a'-'A');
    }
    i++;
  }
  return string;
}
