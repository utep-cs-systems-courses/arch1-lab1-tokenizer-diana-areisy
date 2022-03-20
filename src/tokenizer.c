#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int space_char(char c)
{
  return(c == ' ' || c == '\t');
}

int non_space_char(char c)
{
  return(c != ' ');
}

char *word_start(char *str)
{
  do{
    if(non_space_char(*str)){
      return str;
    }
  }
  while(*(str++)!='\0');

char *word_terminator(char *word)
{
  while(word != 0){
    if(space_char(*word)){
      return word;
    }
    word++;
  }
  return 0;

}
 
