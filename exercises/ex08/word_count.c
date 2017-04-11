/*
    Word_count.c

    By Bill Du

    Count the frequency of each word in the file "TheBattleFieldsOfIreland.txt"
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <glib.h>

void print(gpointer k,gpointer v,gpointer d) {
  printf(d,k,GPOINTER_TO_INT(v));
}

int main(int argc, char** argv) {
  // Read from "TheBattleFieldsOfIreland.txt"
  GHashTable* ht = g_hash_table_new(g_str_hash,g_str_equal);
  FILE* file = fopen("TheBattleFieldsOfIreland.txt","r");
  char buff[256];

  // Scan through the file, count the frequency of each words using a hash table
  while(fscanf(file,"%s",buff) != EOF) {
    char* key = strdup(buff);

    if (g_hash_table_contains(ht,key)) {
      int freq = GPOINTER_TO_INT(g_hash_table_lookup(ht,key));
      g_hash_table_replace(ht,key,GINT_TO_POINTER(freq+1));
    }

    else 
      g_hash_table_insert(ht,key,GINT_TO_POINTER(1));
  }
  // Print
  g_hash_table_foreach(ht,(GHFunc) print, "%s: %d \n");
}