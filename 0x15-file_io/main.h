#ifndef MAIN_H
#define MAIN_H


#define BUFFER_SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file_content(const char *file_from, const char *file_to);
int main(int argc, char *argv[]);
void error_exit(int code, const char *message, const char *filename);

#endif
